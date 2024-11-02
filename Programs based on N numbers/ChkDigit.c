#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Digits
//  Description :   Used to display all such numbers which contains 3 digits in it
//  Input :         Integer, Integer
//  Output :        Void
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Numbers which contains 3 digits are : ");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n\n");

}

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and display all such numbers which contains 3 digits in it.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCount = 0;
    int *Brr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iLength);

    printf("\n");

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }


    for(iCount = 0; iCount < iLength; iCount++)
    {
        printf("Enter element %d : ", iCount + 1);
        scanf("%d",&Brr[iCount]);
    }
    printf("\n");

    Digits(Brr, iLength);

    free(Brr);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input  : N  : 6 
//           Elements: 8225  665  3  66  953  858
//
//  Output : 665   953   858
//
/////////////////////////////////////////////////////////////////////////////////////////////////


