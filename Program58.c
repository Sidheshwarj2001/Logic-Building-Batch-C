//Accept the number from user and Check particular number and its frequecny.
#include <stdio.h>
#include <stdbool.h>

int CountDigitFrequency(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo > 0 )    //updator 
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;

        if(iDigit==8)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigitFrequency(iValue);
    printf("Frequency of 8 is : %d\n",iRet);


    return 0;
}
// Time Complexity : O(1 to N)