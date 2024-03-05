/*Create 3/4 array and find out row sum and column sum*/
#include<stdio.h>
main()
{
	int n[3] [4] , x, y, srow=0, scol=0;

	clrscr();


	for (x = 0; x < 3; x++)
	{
		for(y = 0; y < 4; y++)
		{
			printf("Enter Data for %d row, %d column : ", x + 1, y + 1);
			scanf("%d", &n[x] [y] );
		}
	}

	/*  Row sum */
	printf("\n\n");
	for (x = 0; x < 3; x++)
	{
		srow = 0;
		for(y = 0; y < 4; y++)
		{
			printf("%4d" , n [x] [y]);
		 	srow = srow + n[x] [y];
		}
		printf("\t%d", srow);
		
		printf("\n");
	}
	/*************************/
	printf("\n\n");
	for(y = 0; y < 4  ; y++)
	{
		scol = 0;
		for (x = 0; x < 3 ; x++)
		{
			scol = scol + n[x] [y];
		}
		printf("%4d",scol);
		
	}
}