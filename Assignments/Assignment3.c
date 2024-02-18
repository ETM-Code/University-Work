#include <stdio.h>
#define ARRAYSIZE 15

int main(){
int enterCount = 0, avgHold=0;
float avg = 0;
int numArray[ARRAYSIZE] = {0}, belowAvg[ARRAYSIZE] = {0};

printf("Enter 15 Numbers\n");

while (enterCount<ARRAYSIZE) {
    printf("%d. ", enterCount+1);
    scanf("%d", &numArray[enterCount]);
    enterCount++;
    //Asks for input and increases the count of the inputs supplied when it receives input
}

enterCount--; //Resets the number count to one within the bounds of the number array
for (; enterCount>=0; enterCount--){
    avgHold+=numArray[enterCount];
    //This gets the total value of all provided integers
}
avg = avgHold/ARRAYSIZE;
printf("The average of the numbers entered is %f\n", avg);
printf("The numbers below half the average are as follows:\n");
for (int i=0; i<ARRAYSIZE; i++) {
    if (numArray[i]<avg/2) {
        printf("%d\n", numArray[i]);
        //Iterates through the values. If it finds one below half the average, it displays it
    }
}
return 0;
}