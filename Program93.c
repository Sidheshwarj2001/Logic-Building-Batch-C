// #Accept the n number and one another number from user and return the index of last occurence

// OPTIMISED CODE

#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

int SearchLastOccurance(int Arr[], int iLength , int iNo)
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;

    for(iCnt = iLength-1 ; iCnt >= 0 ; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0 , iValue = 0;
    int iRet = 0;

    printf("Enter the size of Array : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the element : \n");
    
    for(iCnt = 0 ; iCnt < iSize ;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);

    printf("Element of array are : \n");
    for(iCnt = 0 ; iCnt < iSize;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    iRet = SearchLastOccurance(ptr, iSize,iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element \n");
    }
    else
    {
        printf("%d is occured at index %d \n",iValue,iRet);
    }
    
    free(ptr);

    return 0;
}

// Worst case time complexity O(N)
// best case time complexity 0(1)