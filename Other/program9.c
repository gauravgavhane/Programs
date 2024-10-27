#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description :   Used to display the range in reverse order
//  Input :         Integer, Integer
//  Output :        Void
//
//////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range \n");
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////
// Accept range from user & display all numbers in between that range in reverse order
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter the starting point : ");
    scanf("%d", &iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}

/*////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Input  : 23  35
Output : 35	34	33	32	31	30	29	28	27	26	25	24	23

Input  : 10  18
Output : 18	17	16	15	14	13	12	11	10

Input  : 10 10
Output : 10

Input  : -10  2
Output : 2	1	0	-1	-2	-3	-4	-5	-6	-7	-8	-9	-10

Input  : 90  18
Output : Invalid range.

*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

