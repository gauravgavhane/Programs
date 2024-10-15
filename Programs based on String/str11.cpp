#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Diffrence
//  Description :   Used to calculate the diffrence between frequency
//                  of capital and small characters
//  Input :         String
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iDiff=0;
    int iCntCapital=0;
    int iCntSmall=0;

    while(*str != '\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCntSmall++;
        }
        else
        {
            iCntCapital++;
        }
        str++;
    }
    iDiff = iCntSmall - iCntCapital;
	return iDiff;
}

/////////////////////////////////////////////////////////////////////
// Write a program which accepts string from user & return diffrence 
// between frequency of small characters and capital characters
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter a string"<<endl;
    cin.getline(Arr,20);

    iRet = Difference(Arr);

    cout<<"Diffrence betn frequency of small char and frequency of capital char is "<<iRet<<endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : LeafyPaints
//  Output : 9 (11-2)
//
/////////////////////////////////////////////////////////////////////