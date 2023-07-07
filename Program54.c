//Accept the number from user and Check particular number in it .
#include <stdio.h>
#include <stdbool.h>

bool CheckDigitx(int iNo  )
{
     int iDigit = 0;
    
    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 8)
        {
            break;
        }
        iNo = iNo /10;
    }

    if(iNo == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
 
    //  self logic
    //  bool bCheck = false;

    //  for(; iNo != 0 ; iNo = iNo / 10)
    //  {
    //     iDigit = iNo % 10;

    //     if(iDigit == 8)
    //     {
    //         bCheck =  true;
    //         break;
    //     }
    //     iNo = iNo / 10;
    //  }
    //  return bCheck;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckDigitx(iValue);

    if(bRet == true)
    {
        printf("Digit 8 is present in number\n");
    }
    else
    {
        printf("Digit 8 is not present in number\n");

    }

    return 0;
}
// Time Complexity : O(N)