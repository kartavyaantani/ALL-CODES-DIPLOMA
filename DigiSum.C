/* Program to Find out the Sum of Digits of No. */
/* Ex: No. = 5742  Then Sum of digits = 5+7+4+2 = 18 */
#include <stdio.h>
main()
{
   	int n, d1, d2, d3, d4, s ;

	clrscr() ;
	printf("Enter No. : ") ;
	scanf("%d", &n) ;		/* 5742 */
	
	d1 = n / 1000 ;    /* 5 */
	d2 = n / 100 - d1 * 10 ;   /* 7 */
	d3 = n / 10 - d1 * 100 - d2 * 10 ;  /* 4 */
	d4 = n % 10 ;

	s = d1 + d2 + d3 + d4 ;

	printf("\nSum of Digits = %d", s) ;
}

	
	
 	
	
	