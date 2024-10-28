#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkZero
//  Description :   Used to check whether zero is present or not
//  Input :         Integer
//  Output :        BOOL
//
//////////////////////////////////////////////////////////////////////////////////////


BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        
        if (iDigit == 0)
        {
            return TRUE;
        }
        else 
        {
            return FALSE;
        }
    }
    
}

/////////////////////////////////////////////////////////////////////////////////////////
//  Accepts number from user and check whether it contains 0 in it or not
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It contains zero \n");
    }
    else
    {
        printf("There is no zero \n");
    }

    return 0;
}

/*///////////////////////////////////////////////////////////////////////////////////////

Input  : 2395
Output : There is no zero

Input  : 1018
Output : It contains zero

*////////////////////////////////////////////////////////////////////////////////////////

