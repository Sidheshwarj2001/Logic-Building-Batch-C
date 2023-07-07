//Write a program which Check wheather number is Even or Odd.

#include <stdio.h>	//For printf and scanf
#include<stdbool.h>  //For bool Data type

///////////////////////////////////////////////////////////////////////
//
//	Function Name : 	 CheckEvenOdd
//	Input : 		     Integer
//	Output:				Boolean
//	Description:		Check Wheather input is Even or odd
//	Author :			Jawale Badrinath Parmeshwar
//	Data   :			27/04/23
//	Update Data   :		29/04/23
//
/////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
	if ((iNo % 2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//////////////////////////////////////////////////////////////////
//	Entry poin Function
/////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;		//variable to accept input
	bool bRet = false;	//variable to acccept return value
	
	printf("Please enter the number to check wheather it is even or odd : \n");
	scanf("%d",&iValue);

	bRet = CheckEvenOdd(iValue); 	//Function call

	if(bRet == true)
	{
		printf("%d is Even Number",iValue);
	}
	else
	{
		printf("%d is Odd Number",iValue);
	}
	return 0;
}

