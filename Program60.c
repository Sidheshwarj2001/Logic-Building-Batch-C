//Accept the two number from user and Check particular digit how time occurece in it .(Frequency)

#include <stdio.h>
#include <stdbool.h>

int CountDigitFrequcny(int iNo , int iSearch)
{
    int iDigit = 0;
    int iCnt = 0 ;

    if((iSearch < 0  || (iSearch > 9))) //filter
    {
        printf("Enter the digit in range 0 to 9 \n");
        return 0;
    }

    if(iNo < 0)     //updator for iNo
    {
        iNo = -iNo;
    }

    if(iSearch < 0)     //updator for iSearch
    {
        iSearch = -iSearch;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == iSearch)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue1);

    printf("Enter the Digit (0 to 9) : \n");
    scanf("%d",&iValue2);

    iRet = CountDigitFrequcny(iValue1,iValue2);

    printf("Frequncy is : %d\n",iRet);

    return 0;
}
// Time Complexity : O(1 to N)