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
	cout<<hex<<c<<' ';
	cout<<oct<<c<<' ';
	cout<<(char)c<<endl;

}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayASCII
//  Description :   Used to display ASCII values from 0 to 255
//  Input :         Void
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    
    for(int i=0;i<256;i++)
    DisplayTable(i);  
    
}

/////////////////////////////////////////////////////////////////////
//
//  Program which displays ASCII table. 
//  Table contains symbol, Decimal, Hexadecimal and octal 
//  representation of every member from 0 to 255.
//
/////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();

    return 0;
}


