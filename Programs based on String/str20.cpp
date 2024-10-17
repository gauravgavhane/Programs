#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountChar
//  Description :   Used to count characters from the string
//  Input :         String, Character
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int CountChar(char *str,char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }

        str++;

    }

    return iCnt;

}

/////////////////////////////////////////////////////////////////////
//  Program which accept string from user and accept one character. 
//  Return frequency of that character
/////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue;

    cout << "Enter String" << endl;
    cin.getline(arr,20);

    cout << "Enter the Character" << endl;
    cin >> cValue;

    int iRet = CountChar(arr,cValue);

    cout << "Frequency of that Character is : " << iRet << endl;
 
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : Game of Gamble
//	        G
//  Output: 2
//
//  Input:  Game of Gamble
//  	    W
//  Output: 0
//
/////////////////////////////////////////////////////////////////////