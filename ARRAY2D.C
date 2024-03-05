#include <stdio.h>
main()
{
	int n[3] [4], x, y;

	clrscr();

	for (x = 0; x < 3; x++)
	{
		for(y = 0; y < 4; y++)
		{
			printf("Enter Data for %d row, %d column : ", x + 1, y + 1);
			scanf("%d", &n[x] [y] );
			n [x] [y] *= 2;
		}
	}

	printf("\n\n");
	for (x = 0; x < 3; x++)
	{
		for(y = 0; y < 4; y++)
		{
			printf("%4d" , n [x] [y]);
		}
		printf("\n");
	}
}