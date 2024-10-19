#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  StrCpyCapX
//  Description :   Used to copy capital characters of a string 
//                  into another string 
//  Input :         String, String
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

void StrCpyCapX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

/////////////////////////////////////////////////////////////////////
// Accept String & Copy Capital Characters only into Another String
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char Brr[20];

    cout << "Enter String : " << endl;
    cin.getline(Arr,20);

    StrCpyCapX(Arr,Brr);

    cout << "Capital only String is : " << Brr << endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : Sometimes Only Paper Will Listen To You
//	 
//  Output: SOPWLTY
//
/////////////////////////////////////////////////////////////////////
