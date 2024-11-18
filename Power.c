#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   Power
//  Description :     Used to get the power of a number
//  Input :           Integer
//  Output :          Long Integer
//
///////////////////////////////////////////////////////////////////////////////

long int Power(int iNo1, int iNo2)
{
    long int lMult = 1;
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        lMult = lMult * iNo1;
    }
    return lMult;
}

///////////////////////////////////////////////////////////////////////////////
// Accept two number from user as a and b and return the result as a^b 
///////////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    auto long int lRet = 0;

    printf("Enter base : ");
    scanf("%d",&iValue1);

    printf("Enter power : ");
    scanf("%d",&iValue2);

    lRet = Power(iValue1, iValue2);

    printf("Result is : %ld\n",lRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input  : 2	4
// Output : 16  (2 * 2 * 2 * 2)
//
// Input  : 4	3
// Output : 64  (4 * 4 * 4)
//
///////////////////////////////////////////////////////////////////////////////
