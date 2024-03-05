/*Read one string from keybrd.Print the string in reverse after removing all characters other than alphabet */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	char s[50];
	int x, limit;
	
	clrscr();

	printf("Enter string : ");
	gets(s);
                                                          
	limit = strlen(s);

	for(x= limit-1; x >= 0; x--)
	{	
		if(isalpha(s[x]))
		{
			printf("%c",s[x]);
		}
	}
	
}