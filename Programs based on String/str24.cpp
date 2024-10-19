#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  StrCpy
//  Description :   Used to copy string into another string
//  Input :         String, String
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void StrCpyX(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

}

/////////////////////////////////////////////////////////////////////
//  Program which accept string from user and 
//  copy the contents of that string into another string.
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char Brr[20];

    cout << "Enter String : " << endl;
    cin.getline(Arr,20);

    StrCpyX(Arr,Brr);

    cout << "Copied String is : " << Brr << endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input:  Dolby is a free elf
//  Output: Dolby is a free elf       in another string
//
/////////////////////////////////////////////////////////////////////