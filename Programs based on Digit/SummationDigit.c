#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : SumDigits
//  Description :   Used for summation of the digits of a number
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo /10;
    }
    return iSum;
}

/////////////////////////////////////////////////////////////////////////
//  Accept number from user and return the summation of digits
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of digits are : %d\n",iRet);
    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
// Input : 7856
// Output : 26
//
/////////////////////////////////////////////////////////////////////////
