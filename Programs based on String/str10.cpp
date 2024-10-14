#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountSmall
//  Description :   Used to count small characters from the string
//  Input :         String
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt=0;

    while(*str != '\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

/////////////////////////////////////////////////////////////////////
// Write a program which accepts string from user and 
// count number of small characters
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter a string"<<endl;
    cin.getline(Arr,20);

    iRet = CountSmall(Arr);

    cout<<"Number of small characters are "<<iRet<<endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//      Input : LeafyPaints
//      Output : 9
//
/////////////////////////////////////////////////////////////////////