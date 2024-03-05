/*Read one string from keybrd ,find out total capital,small,digits,space and special characters available in string*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	char s[50];
	int x, sumup=0, sumlow=0, sumspace=0, sumspecial=0, sumdigit=0, length;

	clrscr();

	printf("Enter string: ");
	gets(s);

	length = strlen(s);

	for(x = 0; x < length; x++)
	{
		if(isupper(s[x]))
		{
		  sumup += 1;
		}
		else if(islower(s[x]))
		{
		  sumlow += 1;
		}
		else if(isspace(s[x]))
		{
		  sumspace += 1;
		}
		else if(isdigit(s[x]))
		{
		  sumdigit += 1;
		}
		else
		{
		  sumspecial += 1;
		}
	}
	printf("\nTotal Capital characters :%d", sumup);
	printf("\nTotal Small characters :%d", sumlow);
	printf("\nTotal Spaces :%d", sumspace);
	printf("\nTotal Digits :%d", sumdigit);
	printf("\nTotal Special characters :%d", sumspecial);
}






























