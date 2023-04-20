#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigits
//  Description :   Used to display separate digits of a number
//  Input :         Integer
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo /10;
    }
}

/////////////////////////////////////////////////////////////////////////
//  Accept number from user and display separate digits of that number
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}

/////////////////////////////////
//
// Input : 7856
// Output : 6
//          5
//          8
//          7
//
/////////////////////////////////

