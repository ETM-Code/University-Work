#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


//A. *** - for awkwardness more than difficulty(which would be a **)
int calcVisitors(int visitors1[7], int visitors2[7], int visitors3[7]){
    int moreThan1000_1 = 0;
    int moreThan1000_2 = 0;
    int moreThan1000_3 = 0;
    int sum = 0;
    for(int i =0; i<7; i++){
        if (visitors1[i]>1000){moreThan1000_1++;}
    }
    for(int i=0; i<7; i++){
        if (visitors2[i]>1000){moreThan1000_2++;}
    }
    for(int i=0; i<7; i++){
        if (visitors3[i]>1000){moreThan1000_3++;}
    }

    for(int i=0; i<7; i++){
        sum += visitors1[i]+ visitors2[i] + visitors3[i];
    }

    printf("No. Times Site 1 Exceeded 1000 Visitors: %d", moreThan1000_1);
    printf("No. Times Site 2 Exceeded 1000 Visitors: %d", moreThan1000_2);
    printf("No. Times Site 3 Exceeded 1000 Visitors: %d", moreThan1000_3);

    return(sum);
}


//B. ***
int sumEvenDigits(int number){
    int sum=0;
    for(int i=0; i<20; i++){
        if (number!=0){
            int digit = number % 10;
            if(digit % 2 == 0){
                sum+=digit;
            }
            number = number/10;
        }
        else{break;}
    }
    return(sum);
}


//C. **
int checkIntConditions(int integerArray[100]){
    int numThatFit = 0;
    for(int i=0; i<100; i++){
        int number = integerArray[i];
        if(number<300){
            if(number>75){
                if(number % 9 == 0){
                    if(number % 2 ==0){
                        numThatFit++;
                    }
                }
            }
        }
    }
    return(numThatFit);
}

//D. *
float volumeCalc(float radius){
    float volume = (4/3)*3.14*radius*radius*radius;
}
// int main(){
//     float volume = volumeCalc(57.6)-volumeCalc(33.3);
//     printf("Volume: %f", volume);
// }

//E.
float holeVolumeCalc(float length, float height, float depth){
    float gravelVolume = 7.23;
    float volume = 0.5*length*height*depth;
    float deciNumoOfBags = volume/gravelVolume;
    float numOfBags = (float)(ceil(deciNumoOfBags));
    return(numOfBags);
}

//F.
void halfOddSum(int num1, int num2){
    int big, small;
    if(num1>num2){big=num1; small=num2;}
    else{big=num2; small=num1;}
    int sum = 0;
    for(int i = small+1; i<big; i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    int halfSum = sum/2;
    printf("%d", halfSum);
}


int main(){
    int EvenDigitsSum = sumEvenDigits(49670124);
    printf("%d", EvenDigitsSum);

    return 0;
}

