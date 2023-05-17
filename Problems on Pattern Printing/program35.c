#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i = 0 , j = 0;
	int no = 0;
	
	for(i = 1; i <= iRow ; i++)
	{
		for(j = 1; j <=iCol ;j++)
		{
			no++;
			printf("%d\t",no);

			if(no == 9)
			{
				no = 0;
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
// Input :     iRow = 4	 iCol = 4
//
// Output : 	1	2	3	4
//		5	6	7	8
//		9	1	2	3
//		4	5	6	7
//
////////////////////////////////////////////////////////////////////
