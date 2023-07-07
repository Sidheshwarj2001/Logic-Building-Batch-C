//Display "Jay Ganesh" 5 times on Screen

#include<stdio.h>

//Example of Iteration

void Display(int iNo)
{
	int iCnt =0 ;
	// 		1		2			3
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("Jay Ganesh...\n"); //4
	}
}

int main()
{
	int iValue = 0;
	printf("Enter the frequency for Jay Ganesh statememnt.....\n");
	scanf("%d",&iValue);
	
	Display(iValue);

	return 0;
}