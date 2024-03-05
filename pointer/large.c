/*UDF returning a pointer*/
#include <stdio.h>
int *larger (int *x, int *y);		
main()
{
	int a = 10, b = 20, *p;
	p = larger(&a,&b);		/*Function call*/
	printf("%d",*p);
}

int *larger (int *x, int *y)
{
	if(*x > *y)
		return (x);		/*address of a*/
	else
		return (y);		/*address of b*/
}