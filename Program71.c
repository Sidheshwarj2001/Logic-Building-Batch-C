// Problems on N numbers 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n"); // step 1
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int)); //step 2

    if(ptr == NULL)
    {
        printf("unable to allocate memory \n");
        return -1;
    }

    printf("Memory allocated successfully...\n");

    return 0;
}