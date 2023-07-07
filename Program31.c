// Accept the number from user and check wheather that number is prime or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt= 0;
    
    for(iCnt=2 ; iCnt <=(iNo/2) ; iCnt++ )
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }
    if(iCnt == (iNo/2)+1)
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
    int bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }
    else
    {    
        printf("%d is not prime number \n",iValue);
    } 
    return 0;
}

// time complexity is -: O(N/2) or X