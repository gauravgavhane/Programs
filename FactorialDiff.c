#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Description :   Used to give the diffrence between even and odd factorials
//  Input :         Integer
//  Output :        Integer
//
//////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 1, iOddFact = 1, iDiffrence = 0; 

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
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    iDiffrence = iEvenFact - iOddFact;

    return iDiffrence;
}

//////////////////////////////////////////////////////////////////////////////////////
//Write a program which returns diffrence between
// even factorial and odd factorial of given number.
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial diffrence is %d\n",iRet);
    
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
//
// Input  : 5
// Output : -7   (8 - 15)
//
// Input  : -5 
// Output : -7   (8 - 15)
//
// Input  : 10 
// Output : 2895   (3840 - 945)
//
//////////////////////////////////////////////////////////////////////////////////////
