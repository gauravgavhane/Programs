#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountOdd
//  Description :   Used to count even digits from a number
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if ((iDigit % 2) != 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

/////////////////////////////////////////////////////////////////////////
// Accepts number from user and return the count of odd digits
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Number of odd digit : %d\n",iRet);

    return 0;
}

/*////////////////////////////////////////////////////////////////////////

Input  : 2395
Output : 3

Input  : -1018
Output : 2

Input  : 8462
Output : 0

*/////////////////////////////////////////////////////////////////////////

