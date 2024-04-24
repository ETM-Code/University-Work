#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yearNum = 0; //Necessary to vary the behaviour of DisplayInstructions

void DisplayInstructions() {
    //Displays instructions. Different instructions based on the requirements, expressed by yearNum
    if (yearNum == 0) {
        printf("This script will take inputs on the income from two different years, divided monthly.\n");
        printf("The script will then calculate the number of months in the second year when sales exceed the sales of the corresponding month in the previous year.\n");
        printf("Input the sales for the first year (separate each month with a semicolon):\n");
    } else {
        //The instructions for the second scenario (after we've gotten the first set of values)
        printf("Input the sales for the second year (separate each month with a semicolon):\n");
    }
}

int HigherSales(float year1[], float year2[]) {
//Calculates the number of months where sales have increased from the previous year
    int count = 0;
    for (int i = 0; i < 12; i++) {
        if (year2[i] > year1[i]) {
            count++;
        }
    }
    return count;
}

void DisplayAnswer(int monthNum) {
    //Displays the number of months received from HigherSales
    printf("The number of months where sales have increased from the previous year is %d.\n", monthNum);
}

int ValidateAndParseInput(float sales[12]) {
    //Ensures a valid input and converts the input to usable data
    char buffer[1024];
    const char *delimiters = ";"; //Defines what separates the numbers. Can be edited.
    int count = 0;

    if (!fgets(buffer, sizeof(buffer), stdin)) { //Returns an error if fgets encounters an error
        printf("Error reading input.\n");
        return 0; //If 0 is returned, the input is invalid and the function will try again
    }

    char *token = strtok(buffer, delimiters); 
    while (token != NULL && count < 12) { //Ensures all inputs are correctly formatted positive floats
        float value = atof(token);
        if (value <= 0) {
            printf("Invalid input detected: '%s'. Please ensure all numbers are positive and formatted correctly.\n", token);
            return 0; // Input is invalid
        }
        sales[count++] = value;
        token = strtok(NULL, delimiters);
    }

    if (count != 12) { //Ensures the correct number of inputs is supplied
        printf("Insufficient number of values entered. Please enter exactly 12 positive numbers separated by semicolons.\n");
        return 0; // Not enough values
    }

    return 1; // 1 is returned if the input is valid
}

int main() {
    float sales1[12], sales2[12]; //Defines the variables of the sales for years 1 and 2

    for (yearNum = 0; yearNum < 2; yearNum++) {
        DisplayInstructions();
        while (!ValidateAndParseInput(yearNum == 0 ? sales1 : sales2)) { //Waits for valid inputs to be supplied, rerunning the function until this is achieved. Then it sets the sales values for years 1 and 2 
            printf("Please try again.\n");
        }
    }

    int numMonths = HigherSales(sales1, sales2);
    DisplayAnswer(numMonths); //Calls the display function to display our results

    return 0;
}
