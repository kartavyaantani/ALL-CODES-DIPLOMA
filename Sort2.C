/* Sorting Program -  Bubble Sort - Arrange data in Ascending Order */
#include <stdio.h>
main()
{
	int n[10], x, y, tmp,z ;

	clrscr() ;
	for(x = 0 ; x < 10 ; x++)
	{
		printf("\nEnter Data : ") ;
		scanf("%d", &n[x]) ;
	}
	
	/* Sorting Data in Array*/
	
	for(z = 1; z <= 10; z++)
	{
	for(x = 0 ; x <= 8 ; x++)
	{
		for(y = x+1 ; y <= 9 ; y++)
		{	
			if (n[x] > n[y])
			{
				tmp = n[x] ;
				n[x] = n[y] ;
				n[y] = tmp ;
			}
			
			if(y <= 9)
			{		
				break;	 
			}
		 }

	}

	}
	printf("\n\nSorted Data : \n") ;
	for(x = 0 ; x < 10 ; x++)
	{
		printf("%4d", n[x]) ;
	}
}	