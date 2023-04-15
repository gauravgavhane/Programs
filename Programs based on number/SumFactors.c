#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   SumFactors
//  Description :     Used for summation of factors of a number
//  Input :           Integer
//  Output :          Integer
//
///////////////////////////////////////////////////////////////////////////////

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo /2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
              iSum =  iSum + iCnt;
        }
    }
    return iSum;
}

///////////////////////////////////////////////////////////////////////////////
// Accept number from user and display summation of its factors
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Sum of factors : %d\n",iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input  :     10
// Output :     8
//
// Input  :     9
// Output :     4
//
///////////////////////////////////////////////////////////////////////////////