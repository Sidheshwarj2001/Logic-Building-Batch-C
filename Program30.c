// Accept the number from user and check wheather that number is prime or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt= 0;
    bool bFlag = true;
    
    for(iCnt=2 ; iCnt <=(iNo/2) ; iCnt++ )
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
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

// time complexity is -: O(N/2)