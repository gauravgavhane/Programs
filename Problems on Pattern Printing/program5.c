

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

    for(iCnt= iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

/////////////////////////////////////////////////////////////////////////
//  Accept number from user and display the pattern
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;

    printf("Please enter the value :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
// Input  :     4
// Output :     1   2   3   4   4   3   2   1
//
/////////////////////////////////////////////////////////////////////////