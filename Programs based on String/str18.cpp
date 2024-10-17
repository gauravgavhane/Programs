#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountWhite
//  Description :   Used to count the whitespaces of a string
//  Input :         String
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int CountWhite(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

/////////////////////////////////////////////////////////////////////
// Program which accept string from user & count number of white spaces
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    iRet = CountWhite(Arr);
    cout<<"Number of spaces  are : "<<iRet<<endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Input : Phoenix
// Output : 0
//
// Input : Harry Potter
// Output : 1
//
// Input : Harry Potter and The Prisoner of Azkaban
// Output : 6
//
/////////////////////////////////////////////////////////////////////