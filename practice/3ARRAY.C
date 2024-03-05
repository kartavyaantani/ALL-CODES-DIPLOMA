/*Two arrays a and b has size 3/3 read data in these arrays.Compare data of respective elements in a and b array, whichever data is bigger store it in array c(3/3)*/
#include<stdio.h>
main()
{
	int a[3][3] = {{5,12,3},{3,6,8},{9,1,4}} ;
	int b[3][3] = {{6,7,8},{8,6,4},{3,7,5}};
	int c[3][3], big, x,y;

	clrscr();

	for(x = 0; x <= 2; x++)
	{
		for(y = 0; y <= 2; y++)
		{
			if(a[x][y] < b[x][y])
			{
				big = b[x][y];
			}
			else
			{
				big = a[x][y];
			}
			c[x][y] = big;
		}

	}

	printf("\n\nSorted Data : \n") ;
	for(x = 0 ; x <= 2 ; x++)
	{       printf("\n");
		for(y = 0; y <= 2; y++)
		{
		     printf("%4d", c[x][y]);
		}
	}


}