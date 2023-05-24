#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountCapital
//  Description :   Used to count capital characters from string
//  Input :         String
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int CountCapital(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

/////////////////////////////////////////////////////////////////////
// Accept character from user and check whether it is Capital or not
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    iRet = CountCapital(Arr);
    cout<<"Number of capital characters are : "<<iRet<<endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
/*
//  Input  : Phoenix
//  Output : 1
*/  
/////////////////////////////////////////////////////////////////////
