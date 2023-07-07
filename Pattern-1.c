// Pattern Printing

//      Input -        Row : 7  , Col : 5
//      Output -
//                   *  *  *  *  *
//                   *  *  *  *
//                   *  *  *
//                   *  *
//                   *
//                   *
//                   *  *
//                   *  *  *
//                   *  *  *  *
//                   *  *  *  *  *
//                   *
//                   *
//                   *
//                   *
//                   *
//                   *
//                   *
//                   *
//                   *
//                   *
//          *   *   *   *   *   *

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }

    // first patter
    for (i = iRow; i >= 1; i--)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i >= j)
            {
                printf("*\t");
            }
        }
        printf("\n\n");
    }

    // second pattern

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i >= j)
            {
                printf("*\t");
            }
        }
        printf("\n\n");
    }

    // pattern-3
    for(i = 1 ; i <=iRow ;i++)
    {
        printf("*\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter the number of rows : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}