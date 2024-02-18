#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
printf("Enter number:");
int input;
scanf("%i", &input);
int i;
long long fib[500];
fib[0]=1;
fib[1]=1;
for (i=2; i<500; i++) {
fib[i]=fib[i-1]+fib[i-2];
}

for (i=0; i<(input-1); i++) {
    printf("%d\n", fib[i]);
}




}