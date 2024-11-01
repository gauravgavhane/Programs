#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description :   Used to print the pattern
//  Input :         Integer
//  Output :        Void
//
////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    char cValue = '\0';
    int iCnt = 0;

    for(iCnt = 1, cValue = 'A'; iCnt <= iNo; iCnt++,cValue++)
    {
        printf("%c\t",cValue);
    }
    printf("\n");
}

////////////////////////////////////////////////////////////////////////////
// Accept number from user and display below pattern
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

/*/////////////////////////////////////////////////////////////////////////

Input  :    5

Output :    A   B   C   D   E

*//////////////////////////////////////////////////////////////////////////
