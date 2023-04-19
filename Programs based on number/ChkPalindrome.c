#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPalindrome
//  Description :   Used to check whether no is palindrome
//  Input :         Integer
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////////

bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////
//  Program to check whether given number is pallindrome or not
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("%d is palindrome number \n",iValue);
    }
    else
    {
        printf("%d is not a palindrome number \n",iValue);
    }
    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//  Input  : 123215
//  Output : 2123215 is not a palindrome number
//
//  Input  : 14541
//  Output : 14541 is a palindrome number
//
/////////////////////////////////////////////////////////////////////////

