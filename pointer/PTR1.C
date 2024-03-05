#include<stdio.h>
main()
{
	char *name;
	int  length;
	char *cptr ;
	name = "DELHI";
	cptr  = name ;
	clrscr();
	printf("%s\n",name);
	while(*cptr != '\0')
	{
		printf("%c is stored at addr %u\n",*cptr,cptr);
		cptr++;
	}
	length = cptr - name;
	printf("\n Length of string = %d\n",length);
}