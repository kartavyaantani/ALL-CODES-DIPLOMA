/*Design Argument but no return UDF check() having 3 arguments namely - start, stop & choice.

	choice		function/output
	1		sum of all no. in range
	2		sum of all even no. in range
	3 		sum of all odd no. in range

The UDF iseven() & isodd() should be used to check no. for odd-even sum*/
#include <stdio.h>
int isodd(int n);
int iseven(int n);
void check(int start, int stop, int choice);
main()
{
	int start, stop, choice;

	rpt :
	clrscr();
	
	printf("\nEnter start and stop point : ");
	scanf("%d,%d",&start,&stop);
	if(start > stop)
	{	printf("\nInvalid range");
		goto rpt;
	}
	printf("\nEnter choice: ");
	scanf("%d",&choice);
	check(start, stop, choice);
	getch();
}

void check(int start, int stop, int choice)
{
	int i, sum=0;

	switch (choice)
	{
		case 1:	for(i = start; i <= stop; i++)
			{	sum = sum + i;	}
			printf("\nsum of all no. =%d",sum);
			break;

		case 2:	 for(i = start; i <= stop; i++)
			{
				if(iseven(i))
					sum = sum + i;
			}
			printf("\nsum of all even no. =%d",sum);
			break;

		case 3:	 for(i = start; i <= stop; i++)
			{
				if(isodd(i))
					sum = sum + i;
			}
			printf("\nsum of all odd no. =%d",sum);
			break;
		default :	printf("\nWrong choice :( ");
			break;
	}
}


int iseven(int n)
{
	if(n % 2 == 0)
		return (1);
	else
		return (0);
}

int isodd(int n)
{
	if(n % 2 != 0)
		return (1);
	else
		return (0);
}






















