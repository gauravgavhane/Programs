#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   Factorial
//  Description :     Used to perform factorial of a number
//  Input :           Integer
//  Output :          Integer
//
///////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for( iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

/////////////////////////////////////////////////////////////////////
// Write a program to find factorial of given number
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n",iRet);
    
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Input  : 5
// Output : 120     (5 * 4 * 3 * 2 * 1)
//
// Input  : -5
// Output : 120     (5 * 4 * 3 * 2 * 1)
//
// Input  : 4
// Output : 24     (4 * 3 * 2 * 1)
//
/////////////////////////////////////////////////////////////////////
