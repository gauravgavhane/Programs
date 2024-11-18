#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Class Name:    Arithmetic
//  Description :  Arithmetic operations for two numbers
//  Input :        Integer
//  Output :       Integer
//
/////////////////////////////////////////////////////////////////////

class Arithmetic
{
    private: 
        int iNo1;
        int iNo2;

    public:

        /////////////////////////////////////////////////////////////////////
        //
        //  Constructor Name:  Arithmetic
        //  Description :      Initializes the numbers for arithmetic operations
        //  Input :            Integer, Integer
        //  Output :           None
        //
        /////////////////////////////////////////////////////////////////////

        Arithmetic(int A, int B)
        {
            iNo1 = A;
            iNo2 = B;
        }

        /////////////////////////////////////////////////////////////////////
        //
        //  Function Name:  Addition
        //  Description :   Used to perform addition of the two numbers
        //  Input :         None
        //  Output :        Integer
        //
        /////////////////////////////////////////////////////////////////////

        int Addition()
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }
};

/////////////////////////////////////////////////////////////////////
//  Program to perform addition of 2 numbers
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter first number : ";
    cin>>iValue1;

    cout<<"Enter second number : ";
    cin>>iValue2;

    Arithmetic aobj(iValue1, iValue2);

    iRet = aobj.Addition();
    cout<<"Addition is "<<iRet<<endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input  :       11      10
//  Output :       21
//
/////////////////////////////////////////////////////////////////////
