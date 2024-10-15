#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  strlwrX
//  Description :   Used to convert the string in lowercase
//  Input :         String
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void strlwrX(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

/////////////////////////////////////////////////////////////////////
// Program which accept string from user & convert it into lowercase
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    strlwrX(Arr);

    cout<<"String in lower case : "<<Arr<<endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Input :  Game Of Thrones
// Output : game of thrones
//
/////////////////////////////////////////////////////////////////////