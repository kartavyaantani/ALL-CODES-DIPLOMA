/*Read one string from keyboard. Print alphabets in 5th line and special characters in 10th line . Other characters should not be saved*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	char s[50];
	int x, y, col1,col2, limit;

	clrscr();

	printf("Enter string :");
	gets(s);
	limit = strlen(s);
	col1 = 5;
	col2 = 5;
	for(x = 0; x < limit; x++)
	{
		if(isalpha(s[x]))
		{
			col1++;
			gotoxy(col1,5);
			printf("%c",s[x]);

		}
		else if( !isdigit(s[x]) && !isspace(s[x]))
		{
			col2++;
			gotoxy(col2,10);
			printf("%c",s[x]);
		}
	}
}