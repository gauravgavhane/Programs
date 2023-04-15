#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPerfect
//  Description :   Used to check whether no is perfect or not
//  Input :         Integer
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////////

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = (iNo/2); ((iCnt >= 1) && (iSum <= iNo)); iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
              iSum =  iSum + iCnt;
        }
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////
//  Program to check whether given number is perfect 
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }
    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
//  Input  : 6
//  Output : 6 is a perfect number
//
//  Input  : 11
//  Output : 11 is not perfect number
//
/////////////////////////////////////////////////////////////////////////
