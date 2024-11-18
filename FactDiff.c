#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  FactDiff
//  Description :   Used to perform diffrence between summation of 
//		    factors and non-factors
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0, iDiffrence = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
      {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    iDiffrence = iSumFact - iSumNonFact;

    return iDiffrence;
}

/////////////////////////////////////////////////////////////////////////////
//  Write a program which accept number from user and 
//  return diffrence between summation of all its factors and non-factors.
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Diffrence between summation of factors and non-factors is %d\n",iRet);
    
    return 0;
}


/////////////////////////////////////////////////////////////////////////////
//
// Input  : 12
// Output : -34 (16-50)
//
// Input  : 10
// Output : -29 (8-37)
//
/////////////////////////////////////////////////////////////////////////////
