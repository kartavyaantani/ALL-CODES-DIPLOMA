/*read one string from keybrd and arrange it in the shape of right triangle */
#include<stdio.h>
main()
{
		char s[50];
		int x, y, i = 0;

		clrscr();
		printf("Enter string : ");
		gets(s);

		for(x = 1; x <= 10; x++)
		{
			printf("\n");
			for(y = x; y >= 1; y--)
			{
				printf("%c ",s[i]);
				i++;
				if(s[i] == 	NULL)
					exit(0);
			}
		}
}
