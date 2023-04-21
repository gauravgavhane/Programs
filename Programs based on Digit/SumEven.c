#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : SumEven
//  Description :   Used to display the even digits of a number
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int SumEven(int iNo)
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
        if((iDigit % 2) == 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo /10;
    }
    return iSum;
}

/////////////////////////////////////////////////////////////////////////
//  Accept number from user and display the summation of even digits
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumEven(iValue);

    printf("Summation of even digits are : %d\n",iRet);
    return 0;
}
/////////////////////////////////////////////////////////////////////////
//
// Input : 7856
// Output : 14
//
/////////////////////////////////////////////////////////////////////////