#include<stdio.h>

void Display(int iRow, int iCol)
{
        int i = 0, j = 0;
        if(iRow != iCol)
        {
            printf("Invalid input\n");
            return;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j<= iCol; j++)
            {
                    if(i == j)
                    {
                            printf("$\t");
                    }
                    else if(i < j)
                    {
                            printf("*\t");
                    }
                    else if(i > j)     
                    {
                        printf("#\t");
                    }
            }
            printf("\n");
        }
}

////////////////////////////////////////////////////////////////////
//  Accept number from user and display the pattern
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//      Input :  Row 4   Columns 4
//
//       $   *   *    *
//       #   $   *    *
//       #   #   $    *
//       #   #   #    $
//
////////////////////////////////////////////////////////////////////