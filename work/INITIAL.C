/*make initial out of given(I/P) name*
#include <stdio.h>
#include <ctype.h>
main()
{
	int i=1;
	char a[30];
	clrscr();

	printf("Enter name : ");
	gets(a);

	printf("%c.",a[0]);

	while(a[i] != ' ')
	{
		i++;
	}
	printf("%c.",a[++i]);

	while(a[i] != ' ')
	{
		i++;
	}
	i++;
	while(a[i] != NULL)
	{
		printf("%c",a[i++]);
	}
}