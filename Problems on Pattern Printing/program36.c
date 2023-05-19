#include<stdio.h>

void Display(int iRow , int iCol)
{
	int i = 0, j = 0;
	int iEven = 0, iOdd = 0;
	
	for(i = 1; i <= iRow ; i++)
	{
		for(j = 1; j <= iCol ;j++)
		{
			if(i % 2 != 0)
			{
				iEven = j * 2;
				printf("%d\t",iEven);
			}
			else 
			{
				iOdd = (j * 2)-1;
				printf("%d\t",iOdd);
			}
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
//	Input :     	iRow = 4   iCol = 5
//
//	Output: 	2	4	6	8	10
//			1	3	5	7	9
//			2	4	6	8	10
//			1	3	5	7	9
//
////////////////////////////////////////////////////////////////////
