#include<stdio.h>

void Display(int iRow , int iCol)
{
	int i = 0, j = 0;
	char c = '\0';
	
	for(i = 1; i <= iRow ; i++)
	{
		for(j = 1 ,c = 'a'; j <= iCol ;j++,c++)
		{
			if(i % 2 == 0)
			{
				printf("%d\t",j);
			}
			else
			{
				printf("%c\t",c);
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
//	Input :    	 iRow = 5   iCol = 5
//
//	Output: 	a	b	c	d	e
//			1	2	3	4	5
//			a	b	c	d	e
//			1	2	3	4	5
//			a	b	c	d	e
//
////////////////////////////////////////////////////////////////////
