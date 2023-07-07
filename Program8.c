// Write a program which Accept the marks and display the class Accordingly
/*
	0 - 34 =  fail
	35 to 49 = pass class
	50 to 59 =  second class
	60 to 74 = first class
	75 to 100 =  first class with Deistination
*/

#include <stdio.h>	 //For printf and scanf
#include <stdbool.h> //For bool Data type

void DisplayClass(float fMarks)
{

	if ((fMarks < 0.0f) || (fMarks > 100.00f)) // Filter
	{
		printf("Invalid Input \n");
		printf("Please enter the marks in between the range 0 to 100");
		return;
	}

	if ((fMarks >= 0.0f) && (fMarks < 35.00f))
	{
		printf("you Are Fail \n");
	}
	else if ((fMarks >= 35.00f) && (fMarks < 50.00f))
	{
		printf("You got PASS CLASS \n");
	}
	else if ((fMarks >= 50.00f) && (fMarks < 60.00f))
	{
		printf("you Got SECOND CLASS \n");
	}
	else if ((fMarks >= 60.00f) && (fMarks <= 75.00f))
	{
		printf("you Got FIRST CLASS \n");
	}
	else if ((fMarks >= 75.00f) && (fMarks <= 100.00f))
	{
		printf("you Got FIRST CLASS With Destinaction \n");
	}
}

int main()
{
	float fValue = 0.0f;
	printf("Please enter your percentage : ");
	scanf("%f", &fValue);

	DisplayClass(fValue);

	return 0;
}
