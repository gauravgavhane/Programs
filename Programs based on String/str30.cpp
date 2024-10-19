#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  StrCpyX
//  Description :   Used to copy 1st String into 2nd string
//                  by removing all white spaces
//  Input :         String, String
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void StrCpyX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }

        src++;
    }

    *dest = '\0';

}

/////////////////////////////////////////////////////////////////////
// Copy 1st String into 2nd String & By removing all white spaces
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter String : " << endl;
    cin.getline(Arr,40);

    StrCpyX(Arr,Brr);

    cout << "Copied String is : " << Brr << endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : Books Turn Muggles Into Wizard
//	 
//  Output: BooksTurnMugglesIntoWizard
//
/////////////////////////////////////////////////////////////////////