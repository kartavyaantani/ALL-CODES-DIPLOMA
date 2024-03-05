/* study of for loop */
#include <stdio.h>
main()
{
	int start = 10, stop = 100, step = 5,n;

	clrscr();
	
	for(n = start ; n <= stop; n += step)
	{
		printf("\n n = %d",n);
		printf("...inside loop body...");
	}
	
	printf("\n\n\t Outside loop body");

	printf("Program Over");
}