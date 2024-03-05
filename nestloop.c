#include <stdio.h>
main()
{
	int x, y;

	clrscr();
	
	for( x=1; x<=9; x++)
	{
		for( y=1; y<=x; y++)
		{
			printf("%3d",y);
		}
		printf("\n");
	}
	printf("\n\nProgram Over");
}
