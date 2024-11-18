#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   Table
//  Description :     Used to display table of a number
//  Input :           Integer
//  Output :          Void
//
///////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0, iMultiply = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    printf("Table of %d : \n",iNo);
    

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMultiply = iNo * iCnt;
        printf("%d\t",iMultiply);   
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////
// Write a program which accept number and display its table
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Table(iValue);
    
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////
//
// Input  : 5
// Output : 5	10	15	20	25	30	35	40	45	50	
//
// Input  : -5
// Output : 5	10	15	20	25	30	35	40	45	50	
//
// Input  : 2
// Output : 2	4	6	8	10	12	14	16	18	20
//
//////////////////////////////////////////////////////////////////////////////////////
