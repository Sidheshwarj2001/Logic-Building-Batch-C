#include<stdio.h> //for input output
#include<stdlib.h> // memory management

int main()
{
    int iSize = 0; // to store size of array
    int *ptr = NULL; // to store address of array
    int iCnt = 0; // loop Counter

    //STEP 1 - ACCEPT THE NUMBER OF ELEMENT FROM USER
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    //  STEP 2 -- ALLOCATE MEMORY DYNAMICALLY
    ptr = (int *)malloc(iSize * sizeof(int));

    // STEP 3--ACCEPT THE VALUE FROM USER
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Element of array are : \n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }


    return 0;   //RETURN SUCCESS TO OS
}