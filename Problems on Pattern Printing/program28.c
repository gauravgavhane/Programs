#include<stdio.h>

void Display(int iRow, int iCol)
{
        int i = 0, j = 0;
        char ch = '\0';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1,ch = 'a'; j<= i; j++,ch++)
            {
                printf("%c\t",ch);
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

    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//       Input :  Row 4   Columns    4
//
//        a
//        a   b
//        a   b   c
//        a   b   c   d
//
////////////////////////////////////////////////////////////////////