#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Difference
//  Description :   Used to calculate diffrence between the summation of even and odd elements
//  Input :         Integer, Integer
//  Output :        Integer
//
////////////////////////////////////////////////////////////////////////////////////////////////////////


int Difference(int Arr[],int iLength)
{
    int iCnt = 0, iDifference = 0, SumEven = 0, SumOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            SumEven = SumEven + Arr[iCnt];
        }
        else
        {
            SumOdd = SumOdd + Arr[iCnt];
        }
    }

    printf("%d Sumeven is ",SumEven);
        printf("%d Sumodd is ",SumOdd);

    iDifference = SumEven - SumOdd;

    return iDifference;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and return diffrence between the summation of even and odd elements
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *Brr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    Brr = (int *)malloc(iSize * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element number %d : ", iCnt+1);
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Difference(Brr,iSize);

    printf("Diffrence between summation of even and odd numbers is : %d\n",iRet);

    free(Brr);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input  : N : 6
//           Elements: 85 66 3 80 93 88
//  Output : 53  (234-181) 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////


