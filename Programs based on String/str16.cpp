#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  strtoggleX
//  Description :   Used to toggle the string
//  Input :         String
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void strtoggleX(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

/////////////////////////////////////////////////////////////////////
// Program which accept string from user and convert the lowercase
// characters into uppercase & uppercase characters into lowercase
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    strtoggleX(Arr);

    cout<<"Modified string is : "<<Arr<<endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Input :  All of Us are Dead
// Output : aLL OF uS ARE dEAD
//
/////////////////////////////////////////////////////////////////////