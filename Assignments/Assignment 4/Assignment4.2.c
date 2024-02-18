#include <stdio.h>
#include <stdlib.h>

int main() {
char input [1000];
char cleanInput [1000]; //This array will hold the input, omitting the "nonletters"
int inputSize = 0;
printf("Input string for reversal here:\n");
fgets(input, sizeof(input), stdin); //This instead of scanf allows us to accept spaces, and prevents buffer overflow

for(int i=0; input[i]!=0; i++) {
    //This loop filters out the "nonletters"
    if (input[i] >='A' && input[i]<='Z') {
        cleanInput[inputSize] = input[i];
        inputSize++;
    }
    else if (input[i] >='a' && input[i]<='z'){
        cleanInput[inputSize] = input[i];
        inputSize++;
    }  
}

cleanInput[inputSize]='\0'; //Terminating the string correctly
inputSize--; //Brings us back to the content-containing part of the cleanInput

for (int j=inputSize; j>=0; j--) {
//Loops through the string backwards
printf("%c",cleanInput[j]);
}
}