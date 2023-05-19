#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i = 0 , j = 0;
	
	for(i=iRow ; i >= 1 ; i--)
	{
		for(j=iCol ; j >= 1; j--)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
}

////////////////////////////////////////////////////////////////////
//  Accept number from user and display the pattern
////////////////////////////////////////////////////////////////////

int main()
{	
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);	

	Display(iValue1,iValue2);
	
	return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input : 	  iRow = 4	iCol = 5
//
// Output: 	 4	 4	 4	 4	 4	 4
//		 3	 3	 3	 3	 3	 3
//		 2	 2	 2	 2	 2	 2
//		 1	 1	 1	 1	 1	 1
//
////////////////////////////////////////////////////////////////////

