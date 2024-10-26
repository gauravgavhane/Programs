#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Description :   Used to find the even factorial of a number
//  Input :         Integer
//  Output :        Integer
//
//////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0, iEvenFact = 1; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for( iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt%2)==0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }
    return iEvenFact;
}

//////////////////////////////////////////////////////////////////////////////////////
// Write a program to find even factorial of given number
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d\n",iRet);
    
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
//
// Input  : 5
// Output : 8   (4 * 2)
//
// Input  : -5 
// Output : 8   (4 * 2)
//
// Input  : 10 
// Output : 3840   (10 * 8 * 6 * 4 * 2)
//
//////////////////////////////////////////////////////////////////////////////////////
