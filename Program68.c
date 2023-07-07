//Accept the  number from user and return the smallest digit in that number
#include <stdio.h>

int SmallestDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        if(iMin == 0)
        {
            break;
        }

        iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SmallestDigit(iValue);
    printf("Smallet  Digits is : %d\n",iRet);

    return 0;
}
// Time Complexity : O(1 to N)