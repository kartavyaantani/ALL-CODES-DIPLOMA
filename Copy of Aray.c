#include <stdio.h>
main()
{
	int n[5], i;

	clrscr();
	for(i = 0; i < 5; i++)
	{
		printf("Enter nos. :   ");
		scanf("%d", &n[i]);
	}

	for(i = 0; i < 5; i++)
	{
		n[i] *= 2;
		printf("Double data = \n%d",n[i]);
	}
}