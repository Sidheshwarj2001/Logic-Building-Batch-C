/*
	step to create the application
	1.understand the problem statement
	2. write the algorithm
	3.decude the programming language
	4.write the program
	5.test the program
*/

// write a program which perfom addition of two number

/*
	Algorithm

	START 
		Accept First number as iNo1
		Accept Second Number as iNo2
		Create one variable as Ans
		perfrom Addition of iNo1 and iNo2
		store the addition into variable Ans
		Display the value of Ans
	STOP
*/

//////////////////////////////////////////////////////////////////////
//		problem statement : write the program which perform the 	addition of two number and display the answer


// //////////////////////////////////////////////////////////////////
//		Function Name : Addtion
//		Input :    		Unsigned interger , unsigned interger
//		Output : 		unsigned interger
//		Description : 	perform the addition of two number
//		Author : 		Jawale sidheshwar
//		Data : 			18/04/2023
// ///////////////////////////////////////////////////////////////////

#include<stdio.h>

unsigned int Addition(unsigned int iValue1 ,unsigned int iValue2)
{
	unsigned int iResult = 0;
	iResult = iValue1 + iValue2;
	return iResult;
}

int main()
{
	unsigned int iNo1 = 0 , iNo2 = 0 , iAns = 0;
	
	printf("Enter first number : \n");
	scanf("%d",&iNo1);

	printf("Enter second number : \n");
	scanf("%d",&iNo2);

	iAns = Addition(iNo1,iNo2);
	printf("Addition is %d",iAns);

	return 0;
}