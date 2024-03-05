/* Fibo Series using Array */

#include <stdio.h>
main()
{
   	int n[30], i = 2, limit = 500, x ;

	clrscr() ;
	n[0] = n[1] = 1 ;
	n[2] = n[1] + n[0] ;

	while (n[i] <= limit)
	{
		i++ ;
		n[i] = n[i-1] + n[i-2] ;
	}

		
	/* printing of fibo series */

	printf("\n\nFibo Series : \n") ;

	for (x = 0 ; x <= i ; x++)
	{
		if (n[x] <= limit)  printf("%5d", n[x]) ;
	}
}

	