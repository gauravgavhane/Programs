#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  strrevX
//  Description :   Used to reverse the string in place
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

/////////////////////////////////////////////////////////////////////
// Program which accept string from user reverse that string in place
/////////////////////////////////////////////////////////////////////

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
//  Input :  abcd
//  Output : dcba
//
//  Input :  abba
//  Output : abba
//
/////////////////////////////////////////////////////////////////////
