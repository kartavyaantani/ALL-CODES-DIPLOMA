#include<stdio.h>
main()
{
	int *p, sum = 0;
	int x[5] = {10,20,30,40,50};

	clrscr();
	p = x;
	while(p <= &x[4])
	{
		printf("\n%d %u",*p,p);
		sum += *p;
		p++;
	}
	printf("\nSum = %d",sum);
	printf("\np = %u",p);
}