#include <stdio.h>
#include <stdlib.h>

//A. *
int Factorial(int number){
    int factorial = 1;
    for(int i=1; i<=number; i++){
        factorial = factorial*i;
    }
    return(factorial);
}

//B. Omitted because the example was dumb and I didn't want to have to deal with it. You heard it here folks, skip part B's

//C. **
int findingThings(int numbers[100]){
    int sum3 = 0;
    int numGreaterThan25 = 0;
    for(int i =0; i<100; i++){
        if(numbers[i]%3==0){
            sum3+=numbers[i];
        }
        if(numbers[i]>25){
            numGreaterThan25++;
        }
    }
    printf("%d", numGreaterThan25);
    return(sum3);
}

//D. - Same as 2023 D
void timeCheck(int numSecs){
    int hour = 0;
    int minute = 0;
    while(numSecs>59){
        numSecs-=60;
        minute++;
    }
    while(minute>59){
        minute-=60;
        hour++;
    }
    printf("Hours: %d  Minutes: %d  Seconds: %d", hour, minute, numSecs);
}

//E. - Same as both 2023 E's
int sumOdds(){
    int sum = 0;
    int num = 1000;
    int maxNum = 1500;
    while(num<=maxNum){
        if(num % 2 != 0){
            sum += num;
        }
        num++;
    }
    for(num; num<=maxNum; num++){
        if(num % 2 != 0){
            sum += num;
        }
    }
    return(sum);
}

//F. ***
void subtractSmaller(int num1, int num2){
    int bigger, smaller, bufferNum;
    if(num1>num2){bigger=num1; smaller=num2;}
    else{{bigger=num2; smaller = num1;}}
    printf("%d  %d\n", bigger, smaller);
    while(bigger>=1 && smaller>=1){
        bigger-=smaller;
        if(bigger>=1 && smaller>=1){
            if(smaller>bigger){bufferNum=bigger; bigger=smaller; smaller=bufferNum;}
            printf("%d  %d\n", bigger, smaller);
    }
    }
}



int main(){
    subtractSmaller(2342, 8906);
    // int fact = Factorial(5);
    // printf("%d", fact);
    return(0);
}