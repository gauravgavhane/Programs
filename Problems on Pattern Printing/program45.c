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
    int i = 0, j = 0, iNo = 0;

    for(i = 1; i <= iRow; i++)
    {
        for( j = 1; j <= iCol; j++)
        {
            iNo++;
            printf("%d\t",iNo);
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

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter the number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

/*//////////////////////////////////////////////////////////////////////////////

Input  :    iRow = 4    iCol = 4

Output :    
		1	2	3	4	
		5	6	7	8	
		9	10	11	12	
		13	14	15	16

*////////////////////////////////////////////////////////////////////////////////
