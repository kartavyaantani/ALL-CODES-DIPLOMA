#include<stdio.h>
main()
{
	int y,x;
	int *ptr;
	x =10;
	ptr = &x;
	y = *ptr;

	clrscr();
	printf("Value of x is %d\n\n",x);
	printf("%d is stored at address %u\n",x,&x);
	printf("%d is stored at address %u\n",*&x,&x);
	printf("%d is stored at address %u\n",*ptr,ptr);
	printf("%d is stored at address %u\n",ptr,&ptr);
	printf("%d is stored at address %u\n",y,&y);
	*ptr = 25;
	printf("\n Now x = %d\n",x);
}