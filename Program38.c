//Accept the number from the user and Display the Factorial of that number
#include <stdio.h>

void DisplayBackword(int iNo)
{
    int iCnt =0;
    
    for(iCnt = iNo; iCnt >=1; iCnt--) //backword iterating
    {
        printf("%d\t",iCnt); 
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayBackword(iValue);

    return 0;
}