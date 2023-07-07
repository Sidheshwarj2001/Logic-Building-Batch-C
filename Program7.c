//Write a program which Check wheather number is Divisible by 3 AND 5

#include <stdio.h>	//For printf and scanf
#include<stdbool.h>  //For bool Data type

///////////////////////////////////////////////////////////////////////
//
//	Function Name : 	 CheckEvenOdd
//	Input : 		     Integer
//	Output:				Boolean
//	Description:		Check Wheather input is Divisible by 3 or 5
//	Author :			Jawale Badrinath Parmeshwar
//	Data   :			27/04/23
//	Update Data   :		29/04/23
//
/////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
	if (((iNo % 3) == 0) && ((iNo % 5) == 0))
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
	
	printf("Please enter the number to check wheather it is Divisible by 3 AND 5 : \n");
	scanf("%d",&iValue);

	bRet = CheckDivisible(iValue); 	//Function call

	if(bRet == true)
	{
		printf("%d is completely Divisible by 3 AND 5",iValue);
	}
	else
	{
		printf("%d is not completely Divisible by 3 AND 5",iValue);
	}
	return 0;
}

