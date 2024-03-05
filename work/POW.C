#include <stdio.h>
#include <math.h>
main()
{
	double x,i,p;
	clrscr();

	printf("Enter power value: ");
	scanf("%lf",&p);
	printf("Enter base value: ");
	scanf("%lf",&x);

	for (i = 1; i <= p; i+=1)
	{
		printf("\n%lf ",pow(x,i));
	}
}