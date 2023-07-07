// Accept the number from user and check wheather that number is prime or not

#include<stdio.h>
#include<stdbool.h>

int CalculatePower(int iBase , int iPower)
{
    int iCnt = 0;
    int iResult = 1;

    for(iCnt= 1 ; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase ;
    }
    return iResult;
}

int main()
{
    int iValue1 = 0 ,iValue2 = 0;
    int iRet = 0;

    printf("Enter Base : \n");
    scanf("%d",&iValue1);

    printf("Enter Power : \n");
    scanf("%d",&iValue2);

    iRet = CalculatePower(iValue1,iValue2);

    printf("Result is : %d\n" ,iRet);
   
}

// time complexity is -: O(N)