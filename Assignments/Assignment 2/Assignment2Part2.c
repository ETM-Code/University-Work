#include <stdio.h>

int main () {
int sum = 0;
for (int i = 2 ; i<=30 ; i++) {
    if (i%2==0 /*This checks if the number is cleanly divisible by 2, i.e. even*/) {
        sum+=i;
    }
}
printf("The sum of the even numbers from 2 to 30 is %d", sum);

}