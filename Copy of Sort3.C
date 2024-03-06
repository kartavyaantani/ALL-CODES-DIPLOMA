/* Sorting Program -  Bubble Sort - Arrange data in Ascending Order */

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
	for(x = 1 ; x <= 10 ; x++)
	{
		for(y = 0 ; y <= 8 ; y++)
		{
			if (n[y] > n[y+1])
			{
				tmp = n[y] ;
				n[y] = n[y+1] ;
				n[y+1] = tmp ;
			}
		}
	}

	printf("\n\nSorted Data : \n") ;
	for(x = 0 ; x < 10 ; x++)
	{
		printf("%4d", n[x]) ;
	}
}	