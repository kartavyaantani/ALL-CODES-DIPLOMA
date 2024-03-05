 n/*Study of pointer to function*/
#include<stdio.h>

double y(double);
double table(double(*f)(), double, double, double);

main()
{
	clrscr() ;
	printf("Table of y(x) = 2*x*x-x+1\n\n");
	table(y, 0.0, 2.0, 0.5);
}

double table(double(*f)(), double min, double max, double step)
{
	double a, value;
	for(a = min; a <= max; a += step)
	{
		value = (*f)(a);   /* fn call using pointer to function */
		printf("%5.3f  %10.4f\n",a,value);
	}
}
double y(double x)
{
	return(2*x*x-x+1);
}




