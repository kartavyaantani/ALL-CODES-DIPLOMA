/*Generate floyd's triangle ::
	1
	01
	101
	0101
	10101
	....'n' lines
*/
#include<stdio.h>
main()
{
	int x, y, z, limit;

	clrscr();
	
	
	printf("Enter limit : ");
	scanf("%d",&limit);
		
	for(x = 1; x <= limit; x++)
	{
		if(x % 2 !=0)
		{
		 z = 1;
		}
		else
		{
		  z = 0;
		}
		for(y = x; y >= 1; y--)
		{
			printf("%4d",z);
			if(z == 0)

				z = 1;
			else
				z = 0;

		}
		printf("\n");
	}

}

