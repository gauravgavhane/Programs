#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Grade
//  Description :   Used to display grades based on marks
//  Input :         Integer
//  Output :        Void
//
//////////////////////////////////////////////////////////////////////////////////////

void Grade(int Marks)
{
    if ((Marks < 0) &&  (Marks> 100))
    {
        printf("Invalid marks\n");
        return;
    }
    
    if (Marks >= 95)
    {
        printf("A+ grade\n");
    }
    else if ((Marks >= 90) && (Marks < 95))
    {
        printf("A grade\n");
    }
    else if ((Marks >= 85) && (Marks < 90))
    {
        printf("B+ grade\n");
    }
    else if ((Marks >= 80) && (Marks < 85))
    {
        printf("B grade\n");
    }
    else if ((Marks >= 75) && (Marks < 80))
    {
        printf("C+ grade\n");
    }
    else if ((Marks >= 70) && (Marks < 75))
    {
        printf("C grade\n");
    }
    else if ((Marks >= 35) && (Marks < 70))
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    
}
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter your marks : ");
    scanf("%d",&iValue);

    Grade(iValue);

    return 0;
}

/*/////////////////////////////////////////////////////////////////////////////////////

Input  : 23
Output : Fail

Input  : -10
Output : Invalid

Input  : 94
Output : A

/*/////////////////////////////////////////////////////////////////////////////////////