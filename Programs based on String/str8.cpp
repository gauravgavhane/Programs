#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayTable
//  Description :   Used to display the ASCII values of
//                  symbol, Decimal, Hexadecimal and octal 
//  Input :         Integer
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void DisplayTable(int c)
{

	cout<<dec<<c<<' ';
	cout<<oct<<c<<' ';
	cout<<hex<<c<<' '<<endl;

}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayASCII
//  Description :   Used to display ASCII values from 0 to 255
//  Input :         Character
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void DisplayASCII(char *str)
{
    int i;
    DisplayTable(i);  
}

/////////////////////////////////////////////////////////////////////
//  Accept character from user and display its ASCII value in 
//  decimal, octal, and hexadecimal format.
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr;

    cout<<"Enter the character"<<endl;
    cin>>Arr;
    DisplayTable(Arr);
    //cin.getline(Arr,20);

    //DisplayASCII(Arr);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//     Input : A
//     Output : Decimal        65  
//  	        Octal         0101
//              Hexadecimal   0X41
//
/////////////////////////////////////////////////////////////////////