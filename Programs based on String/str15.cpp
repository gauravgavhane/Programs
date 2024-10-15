#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  struprX
//  Description :   Used to convert the string in uppercase
//  Input :         String
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void struprX(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}
/////////////////////////////////////////////////////////////////////
// Program which accept string from user & convert it into uppercase
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    struprX(Arr);

    cout<<"String in upper case : "<<Arr<<endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//      Input :  Game Of Thrones
//      Output : GAME OF THRONES
//
/////////////////////////////////////////////////////////////////////