#include <stdio.h>
main()
{
	float n , s = 0,average;
	int i , limit;

	clrscr();

	printf("Enter limit : ");
	scanf("%d",&limit);

	for(i = 1; i <= limit ; i++)
	{
		printf("\nEnter no. : ");
		scanf("%f",&n);
 		s = s+n;
	}
	average = s/limit;
	printf("\n\tsum = %.5f", s);
	printf("\n\t\tAverage = %.5f", average);
	printf("\n\n\t\tProgram Over");
}       