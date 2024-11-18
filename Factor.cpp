#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   Factors
//  Description :     Used to display factors of number
//  Input :           Integer
//  Output :          Integer
//
///////////////////////////////////////////////////////////////////////////////

void Factors(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    cout<<"Factor of "<<iNo<< " : "<<endl;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            cout<<iCnt<<"\t";
        }
    }
    cout<<endl;
}

///////////////////////////////////////////////////////////////////////////////
// Accept number from user and display its factors 
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    Factors(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input :     10
// Output :    1    2   5
//
// Input :     17
// Output :    1
//
// Input :     -20
// Output :    1    2    4    5    10
//
///////////////////////////////////////////////////////////////////////////////
