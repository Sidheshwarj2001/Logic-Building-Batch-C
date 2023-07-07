//ACCEPT THE NUMBERR FROM USER AND return its Avarge of numbers

#include<stdio.h>
#include<stdlib.h> 

float Avarage(int Arr[] , int iLength)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum / (float)iLength);
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0f;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Element of array are : \n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    fRet = Avarage(ptr,iSize);
    printf("Avarage is : %f\n",fRet);

    free(ptr);

    return 0;
}
