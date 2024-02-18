#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>


void eCheck(char arrayList[])
{
int numOfE = 0;
int i;
for (i=0; arrayList[i]!='\0'; i++){
    if (arrayList[i]=='e' || arrayList[i]=='E') {
        numOfE=numOfE+1;
    }
}
printf("%d \n", numOfE);
}

char* MakeArray(int size) {

char* NewArray = malloc((size+1)*sizeof(char));
if (NewArray== NULL) {
    perror("MemAloc Failed");
    exit(EXIT_FAILURE);
}
int i;
char alphabetArray[46] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
for (i=0; i<size; i++) {
    int letterNum = rand() %46;
    NewArray[i]=alphabetArray[letterNum];
}

return NewArray;

}


int main()
{
srand(time(NULL));
char* array = MakeArray(100);
eCheck(array);

}