
//ACCEPT THE NUMBERR FROM USER AND  DISPLAY ODD NUMBER

#include<stdio.h> //for input output
#include<stdlib.h> // memory management

void OddDisplay(int Arr[] , int iLength)
{
    //  STEP 5 -PERFORM THE OPERATION ON THE ARRAY 
    int iCnt = 0;

    printf("Odd number : \n");
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 !=0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0; // to store size of array
    int *ptr = NULL; // to store address of array
    int iCnt = 0;

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

    //STEP  4 : PASS THE ARRAY TO THE FUNCTION
    OddDisplay(ptr,iSize);// (400 , 4)

    //  STEP 6 -- DEALLOCATE THE MEMORY OF ARRAY
    free(ptr);

    return 0;
}