#include <stdio.h>
#include<string.h>
main()
{

	char s[50],a[50]; 
	int i;

	clrscr();
	
	printf("Ener string : ");
	gets(s);
	strupr(s);
	strcpy(a,s);
	
	strrev(a);
	i = strcmp(s,a);
	
 	if(i != 0)
		printf("Not a palindrome.");
	else
		printf("The string is a palindrome.");
}