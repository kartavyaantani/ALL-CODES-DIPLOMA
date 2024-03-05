#include <stdio.h>
main()
{
  int x, y, z;
  
  clrscr ();
	while (1)
	{
		printf("\n\nEnter two nos. : ");
		scanf("%d , %d" , &x, &y);

		if (y == 0)
		{
		   printf(" \n\tCannot divide by 0. " );
		   break;
		}
		
		z = x / y;
		printf (" \n\t\t Division = %d ",z);
	}
	
	printf("\n\n\tProgram Over");
}