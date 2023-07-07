//Addition of Factors

#include<stdio.h>

int SumFactors(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    if(iNo < 0) //updator
    {
        iNo = - iNo;
    }

    for(iCnt=1; iCnt <= (iNo / 2); iCnt++)
    {
        if(iNo % iCnt ==0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Summation of Factor is : %d\n",iRet);

    return 0;
}