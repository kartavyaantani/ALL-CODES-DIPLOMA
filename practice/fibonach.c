/*Generate fibonacchi series : 1,1,2,3,5,8,13.....upto given limit */

#include <stdio.h>
main()
{
  	int first = 1, second = 1, third, limit ;

	clrscr() ;
	printf("\nEnter limit : ") ;
	scanf("%d", &limit) ;
	
	printf("%d %d ", first, second) ;
	third = first + second ;	

	while (third <= limit)
	{
		printf("%d ", third) ;
		first = second ;
		second = third ;
		third = first + second ;
	}

	printf("\nProgram Over..") ;
}