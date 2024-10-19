// Accept String & Copy Small Characters only into Another String

//Input :Marvellous multi OS
//Output:arvellous multi

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  StrCpySmallX
//  Description :   Used to copy small characters of a string 
//                  into another string 
//  Input :         String, String
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

void StrCpySmallX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a' && *src <= 'z') || *src == ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }

    *dest = '\0';

}

/////////////////////////////////////////////////////////////////////
// Accept String & Copy small Characters only into Another String
/////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char Brr[20];

    cout << "Enter String : " << endl;
    cin.getline(Arr,20);

    StrCpySmallX(Arr,Brr);

    cout << "Smallcase only String is : " << Brr << endl;

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input : Gym Code Sleep Repeat
//	 
//  Output: ym ode leep epeat
//
/////////////////////////////////////////////////////////////////////