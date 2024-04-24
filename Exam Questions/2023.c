#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
//This is for the 2022/2023 Summer past paper
//Difficulty is rated out of 5 stars (*), with 5 stars (*****) being the max difficulty

//A. *
void FibonnaciCalc(int numOfPrints) {
    int fibNum = 1;
    int prevNum = 0;
    for(int i = 0; i< numOfPrints; i++){
        printf("%d ", fibNum);
        int nextFib = fibNum+prevNum;
        prevNum = fibNum;
        fibNum = nextFib;
    }
}

//B. ?
//This question was kinda just nonsense, you should avoid


//C. ***
int countEs(char string[100]){
    int size = 100;
    int numOfE = 0;
    for(int i =0; i<size; i++){
        if(isalpha(string[i])){
            if(string[i] == 'e' || string[i] == 'E'){
                numOfE = numOfE + 1;
            }
        }
        else{printf("%c ", string[i]);}
    }
    return(numOfE);
}


//D. ****
void printDate(int daysSinceStart){
    int monthNum = 0;
    char *monthNames[]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int monthSizes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (daysSinceStart > monthSizes[monthNum]){
        daysSinceStart -= monthSizes[monthNum];
        monthNum++;
    }
    printf("%s %d", monthNames[monthNum], daysSinceStart);
}

//E. **
int findEvenThreeNums(){
    int sum = 0;
    int num = 300;
    int maxNum = 6000;
    while(num<=6000){
        if(num % 2 == 0 && num % 3 == 0){
            sum += num;
        }
        num++;
    }
    for(num; num<=6000; num++){
        if(num % 2 == 0 && num % 3 == 0){
            sum += num;
        }
    }
    return(sum);
}


//F. *
void findSum(int firstInt, int secondInt){
    int sum = 0;
    for(int i=firstInt+1; i<secondInt; i++){
        sum+=i;
    }
    printf("%d", sum);
}








int main(){
    // FibonnaciCalc(20);
    // char eString[100] = {"zAu5xg8gn&HM,;M7;V!S8a7EgdeqTLyeeeeNFFt:x7[*b-tCRZJTi[Qje/6fv!%XyN/XngfcLx4/10V1c}#eGLwbtM&j:j6ZpW1,"};
    // printf("\n");
    // int numE = countEs(eString);
    // printf("\n%d", numE);
    //printDate(133);
    // int sum = findEvenThreeNums();
    // printf("%d", sum);
    findSum(3, 7);
    return 0;
}
