#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkChar
//  Description :   Used to check whether string contains character
//  Input :         String, Character
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////////

bool ChkChar(char *str,char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }

    if(bFlag == true)
    {
        return true;
    }
    else
    {
        return false;
    }

}

/////////////////////////////////////////////////////////////////////
//  Program which accept string from user and accept one character. 
//  Check whether that character is present in string or not.
/////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue;

    cout << "Enter String" << endl;
    cin.getline(arr,20);

    cout << "Enter the Character" << endl;
    cin >> cValue;

    bool bRet = ChkChar(arr,cValue);

    if(bRet == true)
    {
        cout << "Character found" << endl;
    }
    else
    {
        cout << "Character not found" << endl;
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//        Input : Game Of Thrones
//                e
//        Output: True
//
//        Input:  Game Of Thrones
//                x
//        Output: False
//
/////////////////////////////////////////////////////////////////////