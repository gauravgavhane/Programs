#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  StrCpySmall
//  Description :   Used to copy 1st String into 2nd string
//                  by converting capital to smallcase
//  Input :         String, String
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void StrCpySmall(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
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
// Copy 1st String into 2nd String by converting Catital to Small case
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter String : " << endl;
    cin.getline(Arr,20);

    StrCpySmall(Arr,Brr);

    cout << "Copied Smallcase String is : " << Brr << endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : Life Is Art
//	 
//  Output: life is art
//
/////////////////////////////////////////////////////////////////////