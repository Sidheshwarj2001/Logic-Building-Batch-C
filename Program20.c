//Display 1 to 5 on Screen

#include<stdio.h>

void Display(int iNo)
{
	if(iNo < 0) 		//Updator
	{
		iNo = - iNo;
	}

	int iCnt = 0;
	for(iCnt = 1 ; iCnt <=iNo ; iCnt++)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter the Frequency : ");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}