// #Accept the n number from user and return largest number and largest number from it (use only one function)

#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[],int iLength)
{
    int iMin = Arr[0];
    int iMax = Arr[0];
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ;iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }

        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    printf("Largest number is : %d\n",iMax);
    printf("Smallest number is : %d\n",iMin);
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the size of Array : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the element : \n");
    
    for(iCnt = 0 ; iCnt < iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Element of array are : \n");
    for(iCnt = 0 ; iCnt < iSize;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    MaxMin(ptr, iSize);
    
    free(ptr);

    return 0;
}

// time complexity O(N)