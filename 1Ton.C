/* Program to Print No. from 1 to n */

#include <stdio.h>
main()
{
  
 	int n = 1, stop ;

	clrscr() ;
	printf("Enter Stop Value : ") ;
	scanf("%d", &stop) ;

	rpt : printf("%4d", n) ;

	if (n == stop)
	{
		goto end ;   /* Conditional Branching */
	}

	n = n + 1 ;
	goto rpt ;	

	end : printf("\nProgram Over..") ;
}