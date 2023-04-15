#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Summation
//  Description :   Used to perform the summation upto the given no
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int Summation(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        iSum = iSum + iCnt;    
    }
    return iSum;
}

/////////////////////////////////////////////////////////////////////
// Program to perform the summation upto given number
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Summation is : %d\n",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Input : 4
// Output : 10  (1+2+3+4)
//
// Input : 5
// Output : 15  (1+2+3+4+5)
//
/////////////////////////////////////////////////////////////////////

