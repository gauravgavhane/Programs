#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  strrevX
//  Description :   Used to reverse the characters of string
//  Input :         String
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void strrevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    
    while(start < end)
    {
           temp = *start;
           *start = *end;
           *end = temp;

           start++;
           end--;
    }
}

///////////////////////////////////////////////////////////////////////
//Program which accept string from user & displays it in reverse order
///////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    strrevX(Arr);

    cout<<"String after revserse : "<<Arr<<endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//      Input :  LeafyPaintS
//      Output : StniaPyfaeL
//
/////////////////////////////////////////////////////////////////////