#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  FirstChar
//  Description :   Used to return index of first occurence of character
//  Input :         String, Character
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int FirstChar(char *str,char ch)
{
    int iCnt = 0;
    int index = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            index = iCnt;
            break;    
        }

        iCnt++;
        str++;
    }

    if(index == iCnt)
    {
        return index;
    }
    else
    {
        return -1;
    }

}

/////////////////////////////////////////////////////////////////////
//  Program which accept string from user and accept one character. 
//  Return index of first occurence of that character.
/////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue;

    cout << "Enter String" << endl;
    cin.getline(arr,20);

    cout << "Enter the Character" << endl;
    cin >> cValue;

    int iRet = FirstChar(arr,cValue);

    cout << "First Occurance is  : " << iRet << endl;
 
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : Dolby is a free elf
//	        D
//  Output: 0
//
//  Input: Dolby is a free elf 
//	       W
//  Output: -1
//
//  Input: Dolby is a free elf
//	       y
//  Output: 4
//
/////////////////////////////////////////////////////////////////////