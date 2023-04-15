#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEven
//  Description   : Used to check that number is even or odd
//  Input         : Integer
//  Output        : Boolean
//
///////////////////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
       if((iNo % 2) == 0)
       {
         return true;
       }
       else
       {
            return false;
       }
}

/////////////////////////////////////////////////////////////////////////
//  Program to check whether given number is even or odd 
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number : ");
    scanf("%d",&iValue);    

    bRet = ChkEven(iValue);     
    if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }
    return 0;
}


/////////////////////////////////////////////////////////////////////
//
// Input  : 4
// Output : 4 is even number
//
// Input  : 5
// Output : 5 is odd number
//
/////////////////////////////////////////////////////////////////////
