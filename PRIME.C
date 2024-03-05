#include <stdio.h>
main()
{
	int n,i,r;

	clrscr();

	printf("\n\tProgram to check prime no.");
	printf("\n\t...........................");
	printf("\n\t\tEnter no. : ");
	scanf("%d",&n);

	for(i = 2 ; i < n ; i++)
	{
		r = n % i;
 		if (r == 0)
		{
		  printf("\nNumber is not prime.");
		  goto stop;
		}
	}

        printf("\nNumber is prime.");
	stop : printf("\n\tProgram over");
}