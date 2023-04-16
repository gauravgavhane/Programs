#include<stdio.h>
#include<stdbool.h>


///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckArmstrong
//  Description   : Used to check that given number is armstrong
//  Input         : Integer
//  Output        : Boolean
//
///////////////////////////////////////////////////////////////////////////////

bool CheckArmstrong(int iNo)
{
    int iTemp = 0, iCnt = 0,iMult = 1;
    int iDigCnt = 0, iDigit = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigCnt++;
        iNo = iNo / 10;
    }

    iNo = iTemp;

    while(iNo != 0)
    {
        iMult = 1;
        iDigit = iNo % 10;

        for(iCnt = 1; iCnt <= iDigCnt; iCnt++)
        {
            iMult = iMult * iDigit;
        }

         iSum = iSum + iMult;
        iNo = iNo / 10;
    }

    if(iSum == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////
//  Program to check whether given number is armstrong or not. 
/////////////////////////////////////////////////////////////////////////

int  main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet == true)
    {
        printf("%d is armstrong number\n",iValue);
    }
    else
    {
        printf("%d is not armstrong number\n",iValue);
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Input  : 75
// Output : 75 is not armstrong number
//
// Input  : 153
// Output : 153 is armstrong number
//
/////////////////////////////////////////////////////////////////////
