/*Find out the sum of all prime no. between 1 - hundred*/
#include<stdio.h>
main()
{
	int  n, i,  sum = 0,  flag;

	clrscr();

	for(n = 1; n <= 100; n++)
	{
 	  flag = 0 ;
	  for(i = 2; i <= n-1; i++)
	  {
		x = n % i;
		if (x == 0)
		{
			flag = 1 ;
			break ;
		}
	  }
	 if (flag == 0)
	 {
		printf("\t%4d", n);
		sum = sum + n;
	}
            }
            printf("\n\n\tsum of primes : %d",sum);
}