#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bubble.h"

static void PrintArray (char *apszArray[], int iSize);

int main(int iArgC, char *apszArgV[]) {

    char **apszArray = NULL;
    int iCount = iArgC - 1;

    if(iArgC < 2){
        printf("Usage: <string1> <string2> ... <stringN>\n");
        return 1;
    }
    apszArray = (char **) malloc(iCount * sizeof(char *));
    if(apszArray == NULL) return 1;

    // Copy the program parameters into the new array:
    for(int i = 0; i < iCount; i++){
        apszArray[i] = apszArgV[i + 1];
    }
    BubbleSort(apszArray, iCount); // this Sort the array.
    PrintArray(apszArray, iCount); // this print's the array.

    free (apszArray);

    return 0;
}

static void PrintArray(char * apszArray[], int iSize){
    printf("Number of strings %d: \n", iSize);
    for (int i = 0; i < iSize; ++i) {
        printf("%02d: %s\n", i, apszArray[i]);
    }
}
