#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountDigit
//  Description :   Used to count the frequency of a particular digit
//  Input :         Integer, Integer
//  Output :        Integer
//
//////////////////////////////////////////////////////////////////////////////////////

int CountDigit(int iNo1, int iNo2)
{
    int iDigit = 0, iFrequency = 0;

    while (iNo1 != 0)
    {
        iDigit = iNo1 % 10;
        iNo1 = iNo1 / 10;

        if (iDigit == iNo2 )
        {
            iFrequency++;
        }
    }
    return iFrequency;
    
}

/////////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and count frequency of a particular digit
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue1);
    
    printf("Enter digit : ");
    scanf("%d",&iValue2);

    iRet = CountDigit(iValue1, iValue2);

    printf("Frequency of %d is %d\n", iValue2,iRet);

    return 0;
}
/*///////////////////////////////////////////////////////////////////////////////////////

Input  : 2395	2
Output : 1

Input  : 1018	1
Output : 2

*////////////////////////////////////////////////////////////////////////////////////////


