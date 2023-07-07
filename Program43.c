//converting the for loop into while loop
#include <stdio.h>

void DisplayForward(int iNo)
{
    int iCnt = 0;

    iCnt =1;

    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt); 
        iCnt++;
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