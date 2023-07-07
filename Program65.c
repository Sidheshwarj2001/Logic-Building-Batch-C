//Accept the  number from user and check wheather number is palidromic or not

#include <stdio.h>
#include <stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = iNo;     
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10) + iDigit ;//main logic to reverse number
        iNo = iNo / 10;
    }
    if(iReverse == iTemp)
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
    int iValue = 0 ;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("%d is a Palindrome number \n",iValue);
    }
    else
    {
        printf("%d is not a Palindrome number \n",iValue);

    }
    return 0;
}
// Time Complexity : O(1 to N)