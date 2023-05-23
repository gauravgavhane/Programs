#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkDigit
//  Description :   Used to check whether a character is digit 
//  Input :         Character
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////////

bool ChkDigit(char *str)
{
    if((*str>='0')&&(*str<='9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////
//Accept character from user and check whether it is an digit or not
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];   
    bool bRet;

    cout<<"Enter the character"<<endl;
    cin.getline(Arr,20);

   bRet=ChkDigit(Arr);

   if(bRet==true)
   {
       cout<<"It is Digit"<<endl;
   }
   else
   {
       cout<<"It is not Digit"<<endl;
   }

    return 0;
}


/////////////////////////////////////////////////////////////////////
/*
//        Input s
//        Output False
//
//        Input @
//        Output False
//
//        Input 7
//        Output True
*/  
/////////////////////////////////////////////////////////////////////
