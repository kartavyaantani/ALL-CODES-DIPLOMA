#include <stdio.h>
main()
{
	int n, limit;

	clrscr();

	printf("Enter Limit : ");
	scanf("%d", &limit);

	n = 1;
	while (n <= limit)
	{
	  printf("\n n = %d",n);
	  printf("\n Inside Loop");
	  n++;
	}
	   printf("\n Outside Loop");
}