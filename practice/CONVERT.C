/*Read one string from keybrd. Convert all capital characters into small and vice-versa*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	char s[30] , ch;
	int i, length;

	clrscr();

	printf("Enter string :");
	gets (s);

	 length = starlen(s);

	for( i = 0; i < length; i++)
	{
		ch = s[i];
		if(isupper(ch))
			ch = tolower(ch);
		else
			ch = toupper(ch);
		printf("%c",ch);
	}
}

