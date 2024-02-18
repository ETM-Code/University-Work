#include <stdio.h>
#include <stdlib.h>


int main() {
//Here all the main values are initialised
char input[1000];
char vowels[1000];
int vowelCount = 0;
char vowelChars[] = "aAeEiIoOuU"; //The string of what is considered a "vowel"
int numVowels = sizeof(vowelChars)/sizeof(vowelChars[0]); //finding the size of this string, in case of changes made to it

printf("Provide input here:\n");
fgets(input, sizeof(input), stdin);
for(int i = 0; input[i]!='\0'; i++) {
   for (int j = 0; j<numVowels; j++) {
    //loop through vowel string to see if the current element of input is a vowel
    if (input[i]==vowelChars[j]) {
        vowels[vowelCount]=vowelChars[j];
        vowelCount++;
        break; //no need to keep looping if a match has been found
    }
   }
}
vowels[vowelCount]='\0'; //Terminates the string correctly

printf("These are the vowels in the inputted string:\n%s", vowels);

return 0;    
}