#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   Check
//  Description :     Used to check whether given no is divisible by another no
//  Input :           Integer, Integer
//  Output :          Boolean

///////////////////////////////////////////////////////////////////////////////

bool Check(int iNo1, int iNo2)
{
    if ((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////
//  Program to check whether given number is divisible by another number
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    bool bRet = false;

    printf("Enter the number for divisibility : ");
    scanf("%d",&iValue1);

    printf("Enter the number : ");
    scanf("%d",&iValue2);

    bRet = Check(iValue1, iValue2);
    if(bRet == true)
    {
        printf("%d is divisible by %d\n",iValue1,iValue2);
    }
    else
    {
        printf("%d is not divisible by %d\n",iValue1,iValue2);
    }
    return 0;
}

/////////////////////////////////////////////////////////////////////////
// 
// Enter the number for divisibility : 25
// Enter the number : 5
// 25 is divisible by 5
//
/////////////////////////////////////////////////////////////////////////

