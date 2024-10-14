#include<iostream>
using namespace std;

void DisplayTillZ(char str)
{
	while(str<='Z')
	{
		cout<<str<<' ';
		str++;
    }
	cout<<endl;
}

void DisplayRev(char str)
{
    while(str>='a')
    {
        cout<<str<<' ';
        str--;
    }
    cout<<endl;
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description :   Used to display charatcers till Z 
//                  if input is capital character
//  Input :         character
//  Output :        void
//
/////////////////////////////////////////////////////////////////////

void Display(char *str)
{
   
   if((*str>='A')&&(*str<='Z'))
   {
        cout<<"Input characters till Z : "<<endl;
   	    DisplayTillZ(*str);
   }

   else if((*str>='a')&&(*str<='z'))
   {
        cout<<"Input characters in reverse order till a : "<<endl;
   	    DisplayRev(*str);
   }

   else
   {
        cout<<"Invalid Input :( "<<endl; 
   }

}

/////////////////////////////////////////////////////////////////////
/*
// Accept character from user. If it is capital then display all the 
// characters from the input characters till Z
// If input character is small then print all the chacters in reverse 
// order till a. In other cases return directly.
*/
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    cout<<"Enter the character"<<endl;
    cin.getline(Arr,20);

   Display(Arr);

    return 0;
}

/////////////////////////////////////////////////////////////////////
/*
//        Input : Q 
//        Output : Q R S T U V W X Y Z
//
//        Input : d
//        Output : dcba
*/
/////////////////////////////////////////////////////////////////////
