#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEven
//  Description :   Used to display the even digits of a number
//  Input :         Integer
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void DisplayEven(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            printf("%d\n",iDigit);
        }
        iNo = iNo /10;
    }
}

/////////////////////////////////////////////////////////////////////////
//  Accept number from user and display even digits
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayEven(iValue);
return 0;
}

/////////////////////////////////////////////////////////////////////////
//
// Input : 7856
// Output : 8  
//          6
//
/////////////////////////////////////////////////////////////////////////

