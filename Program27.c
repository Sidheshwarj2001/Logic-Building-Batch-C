// Accept the number from user and check wheather that number is perfect or not........

#include <stdio.h>
#include <stdbool.h>

int SumFactors(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    if (iNo < 0) // updator
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

bool CheckPerfect(int iNumber)
{
    int iResult = 0;

    iResult = SumFactors(iNumber);

    if (iResult == iNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);

    if (bRet)
    {
        printf("%d is Perfect number \n", iValue);
    }
    else
    {
        printf("%d is not a Perfect number \n", iValue);
    }

    return 0;
}