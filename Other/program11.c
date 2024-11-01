#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Ticket
//  Description :   Used to display the price of ticket
//  Input :         Integer
//  Output :        Void
//
//////////////////////////////////////////////////////////////////////////////////////

void Ticket(int iAge)
{
    if (iAge < 0)
    {
        printf("Invalid age\n");
        return;
    }
    
    if ((iAge > 0) && (iAge <= 10))
    {
        printf("Your ticket amount is 100 Rs\n");
    }
    else if ((iAge > 10) && (iAge <= 40))
    {
        printf("Your ticket amount is 500 Rs\n");
    }
    else if (iAge > 40)
    {
        printf("Your ticket amount is 300 Rs\n");
    }
}
//////////////////////////////////////////////////////////////////////////////////////
// Accept age from user and display price of movie ticket 
//////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iAge = 0;

    printf("Enter your age : ");
    scanf("%d",&iAge);

    Ticket(iAge);

    return 0;
}

/*/////////////////////////////////////////////////////////////////////////////////////

Input  : 23
Output : 500

Input  : -10
Output : Invalid

Input  : 94
Output : 300

/*/////////////////////////////////////////////////////////////////////////////////////