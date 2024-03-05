/*SUM OF ODD / EVEN NO. IN BETWEEN GIVEN RANGE.*/
#include <stdio.h>
main()
{
	int x, n, sum1=0, sum2=0, limit, odd=0, even=0;

	clrscr();

	printf("\t\tEnter limit/range : ");
	scanf("%d", &limit);

	for( x = 0 ; x <= limit; x++ )
	{
		printf("\n\nEnter number : " );
		scanf("%d" , &n);
		if (n % 2 == 0)
		{
		     even ++;
		     sum1 =  sum1 + n;
  		}
		else
		{
		     odd ++;
		     sum2 = sum2 + n;
		}
	}
	
	printf("\nTotal of odd no: %d " , sum2);     
	printf("\nTotal of even no: %d " , sum1);

	printf("\n\n\tProgram Over");
}