// Problems on N numbers 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5]; // static memory allocation

    printf("Enter the Element : \n");
    
    for(int iCnt = 0; iCnt < 5 ;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    printf("Element of Array are : \n");

    for( int iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}