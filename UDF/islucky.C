/*design a UDF islucky(n) that returns true if no. is lucky otherwise false*/
/*Ex.-- no. is lucky if the sum of odd digits is same as sum of even digits(eg.5124)*/
#include<stdio.h>
int  islucky (int a);
main()
{
	int i ;

	clrscr();
	printf("Enter no. : ");
	scanf("%d",&i);
	if(islucky(i))
		printf("The no. is lucky .");
	else
		printf("The no. is not lucky.");
}

int  islucky(int a)
{

	int sumodd=0, sumeven=0,x;

	while (a != 0)
	{

		x = a % 10;
		if(x % 2 == 0)
			sumeven += x;
		else
			sumodd += x;

		a /= 10;
	}

	if (sumodd == sumeven)
		return (1);
	else
		return (0);
}











	