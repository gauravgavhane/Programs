#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPrime
//  Description :   Used to check whether no is prime or not
//  Input :         Integer
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
            return true;
        }
    }
    return false;
}

/////////////////////////////////////////////////////////////////////////
//  Program to check whether given number is prime or not
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number : ");
    scanf("%d",&iValue);
    
    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//  Input  : 25
//  Output : 25 is not a prime number
//
//  Input  : 7
//  Output : 7 is a prime number
//
/////////////////////////////////////////////////////////////////////////