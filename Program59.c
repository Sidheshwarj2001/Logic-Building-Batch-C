//Accept the two number from user and Check particular digit are present in number or not
#include <stdio.h>
#include <stdbool.h>

bool CheckDigit(int iNo , int iSearch)
{
    int iDigit = 0;

    if((iSearch < 0  || (iSearch > 9))) //filter
    {
        printf("Enter the digit in range 0 to 9 \n");
        return false;
    }

    if(iNo < 0)     //updator
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            break;
        }
        iNo = iNo / 10;
    }
    
    if(iDigit == iSearch)
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
    int iValue1 = 0 , iValue2 = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue1);

    printf("Enter the Digit (0 to 9) : \n");
    scanf("%d",&iValue2);

    bRet = CheckDigit(iValue1,iValue2);
    
    if(bRet == true)
    {
        printf("%d is present in %d\n",iValue1,iValue2);
    }
    else
    {
        printf("%d is not present in %d\n",iValue1,iValue2);

    }


    return 0;
}
// Time Complexity : O(1 to N)