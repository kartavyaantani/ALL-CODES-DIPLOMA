#include <stdio.h>
main()
{
	int n, limit ;

	clrscr();
	printf("Enter limit : ");
	scanf("%d" , &limit);

	n = 0;
	while( n <= limit )
	{
		n++;
		if ( n % 5 == 0)
		{
		   continue;
		}
		printf("\n n = %d " , n);
	}
}