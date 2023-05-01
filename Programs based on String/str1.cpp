#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkCapital
//  Description :   Used to check whether a character is capital 
//  Input :         String
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////////

bool ChkCapital(char str[])
{
    if((*str >= 'A')&&(*str <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////
// Accept character from user and check whether it is Capital or not
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];   
    bool bRet;

    cout<<"Enter the character"<<endl;
    cin.getline(Arr,20);

    bRet=ChkCapital(Arr);

        if(bRet==true)
        {
            cout<<"It is Capital Character"<<bRet<<endl;
        }
        else
        {
            cout<<"It is not Capital character"<<bRet<<endl;
        }

    return 0;
}

/////////////////////////////////////////////////////////////////////
/*
//  Input : 5
//  Output : It is not Capital Character
//
//  Input : A
//  Output : It is Capital Character
*/  
/////////////////////////////////////////////////////////////////////