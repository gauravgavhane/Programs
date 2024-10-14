#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkSpecial
//  Description :   Used to check whether a special symbol
//  Input :         String
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////////

bool ChkSpecial(char *str)
{
    if((*str=='!')||(*str=='@')||(*str=='#')||(*str=='$')||(*str=='%')||(*str=='^')||(*str=='&')||(*str=='*'))
    {
        return true;
    }
    else
    {
        return false;
    }

}

/////////////////////////////////////////////////////////////////////
// Accept character from user and check whether it is special symbol 
/////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    bool bRet;

    cout<<"Enter character"<<endl;
    cin.getline(Arr,20);

     bRet=ChkSpecial(Arr);

   if(bRet==true)
   {
       cout<<"It is Special symbol"<<endl;
   }
   else
   {
       cout<<"It is not Special symbol"<<endl;
   }

    return 0;
}

/////////////////////////////////////////////////////////////////////
/*
//        Input  : $
//        Output : True
//
//        Input  : h
//        Output : False
//
//        Input  : 6
//        Output : False
*/
/////////////////////////////////////////////////////////////////////