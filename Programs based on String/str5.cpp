#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description :   Used to display charater in lowercase 
//  Input :         Character
//  Output :        Void
//
/////////////////////////////////////////////////////////////////////

void Display(char *str)
{
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;
        }
        else if((*str>='a')&&(*str<='z'))
        {
            *str=*str-32;
        }
        else
        {
          *str;  
        }
        str++;
    }
}

/////////////////////////////////////////////////////////////////////
// Accept character from user. If character is small display its 
// corresponding capital character, and if it small then display its 
// corresponding capital. In other cases display as it is.
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    cout<<"Enter a character"<<endl;
    
    cin.getline(Arr,20);

    Display(Arr);

    cout<<"Characters after changes is : "<<Arr<<endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Input : q
// Output : Q
//
// Input : W
// Output : w
//
/////////////////////////////////////////////////////////////////////
