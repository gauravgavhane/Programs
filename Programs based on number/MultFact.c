#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  MultFact
//  Description :   Used to perform multification of factors
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iAns = iAns * iCnt;
        }
    }
    return iAns;
}

//////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user & display its multiplication of factors.
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of Factors is %d\n",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Input  : 12
// Output : 144 (1*2*3*4*6)
//
// Input  : 13
// Output : 1   (1)
//
// Input  : 10
// Output : 10  (1*2*5)
//
/////////////////////////////////////////////////////////////////////
