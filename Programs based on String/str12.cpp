#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkVowel
//  Description :   Used to check whether a string contains vowels
//  Input :         String
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////////

bool ChkVowel(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
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
//  Program which accept string from user and 
//  check whether it contains vowels or not
/////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];

    cout << "Enter String" << endl;
    cin.getline(arr,20);

    bool bRet = ChkVowel(arr);

    if(bRet == true)
    {
        cout << "String Contains Vowel" << endl;
    }
    else
    {
        cout << "String does not Contain Vowel" << endl;
    }
    
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//      Input :  leafy
//      Output : True
//
//      Input :  Demo
//      Output : True
//
//      Input :  xyz
//      Output : False
//
/////////////////////////////////////////////////////////////////////