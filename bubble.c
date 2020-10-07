
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bubble.h"

static void Swap (char **ppszA, char **psszB);

/*

    Bubble Sort is the simplest sorting algorithm that works by repeatedly
    swapping the adjacent elements if they are in wrong order.

    https://www.geeksforgeeks.org/bubble-sort/

 */

void BubbleSort (char *apszArray[], int iSze)
{
   int bHasSwapped = TRUE;
   while (bHasSwapped) {
      bHasSwapped = FALSE;
      for (int i = 1; i < iSze; i++) {
         if (strcasecmp(apszArray[i-1], apszArray[i]) > 0) {
            Swap (&apszArray[i-1], &apszArray[i]);
            bHasSwapped = TRUE;
            // PrintArray (apszArray, iSze);
         }
      }
   }
}

static void Swap (char **ppA, char **ppB)
{
   char *pTmp;
   pTmp = *ppA;
   *ppA = *ppB;
   *ppB = pTmp;
}
