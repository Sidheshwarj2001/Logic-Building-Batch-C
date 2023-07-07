//Accept the two number from user and count even digit how time occurece in it .(Frequency)

#include <stdio.h>
#include <stdbool.h>

int CountEvenDigit(int iNo )
{
    int iDigit = 0;
    int iCount = 0 ;

    if(iNo < 0)     //updator for iNo
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    
    return iCount;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigit(iValue);

    printf("Frequncy of even number is : %d\n",iRet);

    return 0;
}
// Time Complexity : O(1 to N)