#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  StrCatX
//  Description :   Used to concat 2nd String after First
//  Input :         String, String
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void StrCatX(char *src,char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    *src = ' ';
    src++;

    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }

    *src = '\0';
}

/////////////////////////////////////////////////////////////////////
// Accept 2 Strings & Concat 2nd String after First
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[40];
    char Brr[40];

    cout << "Enter First String : " << endl;
    cin.getline(Arr,40);

    cout << "Enter Second String : " << endl;
    cin.getline(Brr,40);

    StrCatX(Arr,Brr);

    cout << "Concated String : " << Arr << endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : Gym Code 
//          Sleep Repeat
//	 
//  Output: Gym Code Sleep Repeat
//
/////////////////////////////////////////////////////////////////////
