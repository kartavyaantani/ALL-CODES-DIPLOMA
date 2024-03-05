/* Program to Print No. from 1 to n */

#include <stdio.h>
main()
{

 	int n = 1, stop ;

	clrscr() ;
	printf("Enter Stop Value : ") ;
	scanf("%d",&stop) ;

	

	rpt: if (n >= stop)
	{

		goto end ;   /* Conditional Branching */
	}

	 printf("%4d", n) ;
	n = n + 2 ;
	goto rpt ;

	end : printf("\n\tProgram over...") ;
}