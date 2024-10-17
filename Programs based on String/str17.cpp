#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayDigits
//  Description :   Used to display digits from the string
//  Input :         String
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            cout << *str;
        }
        str++;
    }
    cout << endl;
}

/////////////////////////////////////////////////////////////////////
//  Program which accept string from user and display 
//  only digits from that string
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    cout << "Enter String" << endl;
    cin.getline(Arr,20);

    DisplayDigits(Arr);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : game234of07
//  Output : 23407
//
//  Input : Demo
//  Output : 
//
/////////////////////////////////////////////////////////////////////