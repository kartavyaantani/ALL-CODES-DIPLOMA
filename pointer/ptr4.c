#include<stdio.h>
main()
{
	char a = 'R';
	int    x = 125;
	
	clrscr();
	printf("%c is stored at address %u\n",a,&a);
	printf("%d is stored at address %u\n",x,&x);
}
	
	