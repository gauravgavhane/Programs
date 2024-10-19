
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  StrCpyCap
//  Description :   Used to copy 1st String into 2nd string
//                  by converting smallcase to capital case
//  Input :         String, String
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void StrCpyCap(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
            dest++;
        }
        else
        {
            *dest = *src;
            dest++;
        }

        src++;
    }

    *dest = '\0';

}

/////////////////////////////////////////////////////////////////////
// Copy 1st String into 2nd String By converting smallcase to capital case
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter String : " << endl;
    cin.getline(Arr,20);

    StrCpyCap(Arr,Brr);

    cout << "Copied Capital String is : " << Brr << endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : Life is art
//	 
//  Output: LIFE IS ART
//
/////////////////////////////////////////////////////////////////////