#include <stdio.h>



int main(){

int sum = 0, count = 0, number = 0;


printf("Enter numbers (9999 to end):\n");

while (1){
    scanf("%d", &number);
    if (number == 9999) {
        // check if we've reached teh sentinel
        break;
    }
        sum += number;
        count++;
}

if (count>0) {
    double average = (double)sum/count;
    printf("The average of the values provided (discarding 9999) is %.2f\n", average);
}

return 0;

}