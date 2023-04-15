#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountFactor
//  Description :   Used to count the number of factors
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////

int CountFactor(int iNo)
{
    int iCnt = 0;
    int iFactCnt = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactCnt++;
        }
    }
    return iFactCnt;
}

/////////////////////////////////////////////////////////////////////
// Program to count the number of factors
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountFactor(iValue);

    printf("Number of factors are : %d\n",iRet);
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Enter number : 25
// Number of factors are : 2
//
/////////////////////////////////////////////////////////////////////