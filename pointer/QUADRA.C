/*Quadratic Equation  has root x and y .Write function that uses two pointer parameters
 to receive the coefficients a,b,c and other to send roots to the calling function*/
#include <stdio.h>
#include <math.h>
void quadratic(double*, double*);
main()
{
	double a[3] = {1,-5,6}, b[2];

	clrscr();
	quadratic(a, b);
	printf("Root 1 =%lf,\nRoot2 = %lf",b[0],b[1]);
}

void quadratic(double *x, double *y)	
{
	double a, b, c, delta ;
	a = *x;
	b = *(x + 1);
	c = *(x + 2);
	delta = sqrt(b * b - 4 * a * c);

	*y = (-b + delta) / (2 * a);
	*(y + 1) = (-b - delta) / (2 * a);
	return ;
}