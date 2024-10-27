#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Description :   Used to calculate the addition of numbers from range
//  Input :         Integer
//  Output :        Integer
//
//////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid range \n");
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;

}

//////////////////////////////////////////////////////////////////////////////////////
// Accept range from user and return addition of all numbers in between that range
// (Range should contain positive numbers only)
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    
    printf("Enter the starting point : ");
    scanf("%d", &iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d\n",iRet);

    return 0;
}

/*//////////////////////////////////////////////////////////////////////////////////////////////////////

Input  : 23  30
Output : 212

Input  : 10  18
Output : 126

Input  : -10  2
Output : Invalid range

Input  : 90  18
Output : Invalid range.

*///////////////////////////////////////////////////////////////////////////////////////////////////////

