/*Using pointers, read an array and print in reverse order*/
#include <stdio.h>
main()
{
	int a[10], *p, i;
	p = a;

	clrscr();
	for(i = 0; i < 10; i++)
	{
		printf("Enter data :");
		scanf("%d" , p + i);
	}

	printf("\n\n");
	for(i = 9; i >= 0; i--)
	{
		printf("%3d",*(p + i));
	}
}
