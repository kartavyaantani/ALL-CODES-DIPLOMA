/* Sorting Program -  Simple Sort - Arrange data in Descending Order */

#include <stdio.h>
main()
{
	int n[10], x, y, tmp ;

	clrscr() ;
	for(x = 0 ; x < 10 ; x++)
	{
		printf("\nEnter Data : ") ;
		scanf("%d", &n[x]) ;
	}
	
	/* Sorting Data in Array */
	for(x = 0 ; x <= 8 ; x++)
	{
		for(y = x + 1 ; y <= 9 ; y++)
		{
			if (n[x] < n[y])
			{
				tmp = n[x] ;
				n[x] = n[y] ;
				n[y] = tmp ;
			}
		}
	}

	printf("\n\nSorted Data : \n") ;
	for(x = 0 ; x < 10 ; x++)
	{
		printf("%4d", n[x]) ;
	}
}	