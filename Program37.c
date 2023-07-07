//Accept the number from the user and Display the Factorial of that number
#include <stdio.h>

void DisplayForward(int iNo)
{
    int iCnt =0;
    
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("%d\t",iCnt); 
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayForward(iValue);

    return 0;
}