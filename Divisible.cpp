#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   Check
//  Description :     Used to check whether given no is divisible by another no
//  Input :           Integer, Integer
//  Output :          Boolean

///////////////////////////////////////////////////////////////////////////////

bool ChkDivisible(int iNo1, int iNo2)
{
    if (iNo1 % iNo2 == 0)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    cout<<"Enter the number to check divisibility : ";
    cin>>iValue1;

    cout<<"Enter the number : ";
    cin>>iValue2;

    bRet = ChkDivisible(iValue1, iValue2);

    if (bRet == true)
    {
        cout<<iValue1<<" is divisible by "<<iValue2<<endl;
    }
    else
    {
        cout<<iValue1<<" is not divisible by "<<iValue2<<endl;    
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