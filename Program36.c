// Accept the number from user and check wheather that number is prime or not

#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int ULONG;

ULONG CalculatePower(int iBase , int iPower)
{
    int iCnt = 0;
    ULONG iResult = 1;

    if((iBase < 0) || (iPower < 0)) //filter
    {
        return 0;
    }

    for(iCnt= 1 ; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase ;
    }
    return iResult;
}

int main()
{
    int iValue1 = 0 ,iValue2 = 0;
    ULONG iRet = 0;

    printf("Enter Base : \n");
    scanf("%d",&iValue1);

    printf("Enter Power : \n");
    scanf("%d",&iValue2);

    iRet = CalculatePower(iValue1,iValue2);

    printf("Result is : %d\n" ,iRet);
   
}

// time complexity is -: O(N)