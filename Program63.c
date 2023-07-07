//Accept the  number from user and return in reverse order

#include <stdio.h>
#include <stdbool.h>

int ReverseNumber(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;

    if(iNo < 0)
    {
        iNo =-iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10) + iDigit ;//main logic to reverse number
        iNo = iNo / 10;
    }
    return iReverse;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = ReverseNumber(iValue);

    printf("Reverse number is : %d\n",iRet);

    return 0;
}
// Time Complexity : O(1 to N)