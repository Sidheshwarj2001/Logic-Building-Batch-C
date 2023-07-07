//converting the for loop into while loop
#include <stdio.h>

void DisplayForward(int iNo)
{
    int iCnt = 0;

    iCnt =iNo ;

    while(iCnt >= 1)
    {
        printf("%d\t",iCnt); 
        iCnt--;
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