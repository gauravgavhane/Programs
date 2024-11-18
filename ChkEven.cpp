#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEven
//  Description   : Used to check that number is even or odd
//  Input         : Integer
//  Output        : Boolean
//
///////////////////////////////////////////////////////////////////////////////


bool ChkEven(int iNo)
{
       if((iNo % 2) == 0)
       {
            return true;
       }
       else
       {
            return false;
       }
}

/////////////////////////////////////////////////////////////////////
//  Check whether number is even or odd
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iValue;

    bRet = ChkEven(iValue);

    if (bRet == true)
    {
        cout<<iValue<<" is a even number"<<endl;
    }
    else
    {
        cout<<iValue<<" is a odd number"<<endl;
    }
    
    return 0;
}