/*Create UDF isprime() to check no for prime*/

#include <stdio.h>
int isprime(int n);
main()
{
	int a;
	clrscr();

	printf("\nEnter no. : ");
	scanf("%d",&a);
	if (isprime(a))
		printf("\nThe no. is prime.");
	else
		printf("\nThe no. is not prime.");
}

int isprime(int n)

{
	int i,r;

	for(i = 2 ; i < n ; i++)
	{
		r = n % i;
 		if (r == 0)
		{
		   return (0);
		}
	}
	return (1);
}
