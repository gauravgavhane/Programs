#include <stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description :   Used to print the pattern
//  Input :         Integer
//  Output :        Void
//
////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Number of rows and columns are not same \n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j<= iCol; j++)
        {
            if((i+j) > (iRow+1))
            {
                printf("@\t");
            }
            else if( (i+j) == (iRow + 1))
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and display below pattern
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

/*//////////////////////////////////////////////////////////////////////////////

Input  :    iRow = 4    iCol = 4

Output :    
            *       *       *       #
            *       *       #       @
            *       #       @       @
            #       @       @       @

*////////////////////////////////////////////////////////////////////////////////

