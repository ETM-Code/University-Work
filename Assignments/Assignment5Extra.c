#include <stdio.h>
#include <stdlib.h>
int yearNum = 0;

void DisplayInstructions() {
//instructions here
if (yearNum == 0) {
printf("This script will take inputs on the income from two different years, divided monthly.\n");
printf("The script will then calculate the number of months in the second year when sales exceed the sales of the corresponding month in the previous year");
printf("Input the sales for the first year (separate each month with a comma):\n");
}
else {
printf("Input the sales for the first year (separate each month with a comma (use no commas in the numbers)):\n"); 
}
}

int HigherSales(float year1[], float year2[]) {
//Calculate the number of months where sales have increased from the previous year

}

void DisplayAnswer(monthNum) {
//Display the number of months from HigherSales

}

int checkMonths(const char *input) {
int count = 0;
for(int i; i!="\0"; i++) {
if (input[i] == ",") {
    count++;
}
if (count>=12) {
    count = -1;
    break;
}
}

if (count<12) {
    count =-2;
}
return count;
 
}

int main1() {
float sales1[12];
float sales[12];
char buffer[1024];
int nextPath = 0;
fgets(buffer, sizeof(buffer), stdin);
buffer[strcspn(buffer, "\n")] = 0;
nextPath = checkMonths(buffer);
if (nextPath==12) {
return(buffer);
}
else if (nextPath==-1) {
    printf("You inputted too many months worth of data. Please retry");
    main();
    return 0;
}
else if (nextPath==-2) {
    printf("You inputted too few months worth of data. Please retry");
    main();
    return 0;
}
return
}

int main() {
float sales1[12];
float sales[12];
char buffer[1024];
int nextPath = 0;
DisplayInstructions();
buffer = main1();
if (buffer == 0) {
    return 0;
}
else {

}

}
