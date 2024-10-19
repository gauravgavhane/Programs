#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  StrNCpy
//  Description :   Used to copy string into another 
//                  string till that integer index
//  Input :         String, Character, Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

void StrNCpyX(char *src,char *dest,int iCnt)
{
    int Stop = 0;

    while((*src != '\0') && Stop != iCnt)
    {
        *dest = *src;
        src++;
        dest++;
        Stop++;
    }

    *dest = '\0';

}

/////////////////////////////////////////////////////////////////////
//  Accept 1 String & 1 Integer & copy that string into another 
//  string till that integer index
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char Brr[20];

    cout << "Enter String : " << endl;
    cin.getline(Arr,20);

    StrNCpyX(Arr,Brr,7);

    cout << "Output String : " << Brr << endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : Valar Morghulis
//	        6
//  Output: Valar M
//
/////////////////////////////////////////////////////////////////////