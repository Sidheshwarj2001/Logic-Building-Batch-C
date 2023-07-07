// #Accept the n number from user and return largest number and largest number from it 

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    int iMax = Arr[0];
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ;iCnt++)
    {
        if(iMax > Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int Maxmum(int Arr[],int iLength)
{
    int iMax = Arr[0];
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ;iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

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
    
    iRet = Minimum(ptr, iSize);
    printf("Smallest number is : %d\n",iRet);

    iRet = Maxmum(ptr, iSize);
    printf("Largest number is : %d\n",iRet);

    free(ptr);

    return 0;
}

// time complexity O(2N)