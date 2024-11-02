#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description :   Used to display all such elements which are even and divisible by 5
//  Input :         Integer, Integer
//  Output :        Void
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Numbers which are even and divisible by 5 : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2 == 0) && (Arr[iCnt] % 5 == 0))
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
    printf("\n");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and display all such elements which are even and divisible by 5
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCount = 0;
    int *Brr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }
    printf("\n");

    for(iCount = 0; iCount < iLength; iCount++)
    {
        printf("Enter element %d : ", iCount+1);
        scanf("%d",&Brr[iCount]);
    }
    printf("\n");

    Display(Brr, iLength);

    free(Brr);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input  : N : 6
//           Elements: 85 66 3 80 93 88
//  Output : 80 
//
/////////////////////////////////////////////////////////////////////////////////////////////////

