/* To find the sum of digits of given no. */
/* Ex: 35241 */
#include <stdio.h>
main()
{
 	long int n, d, s = 0 ;

	clrscr() ;
	printf("Enter any no. : ") ;
	scanf("%ld", &n) ;

	while ( n != 0)
	{
		d = n % 10 ;	
		s = s + d ;
		n = n / 10 ;	
	}
	
	printf("\nSum of Digits = %ld", s) ;
}	
  