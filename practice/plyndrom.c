/*Read one string from keyboard check it for palyndrome */
#include<stdio.h>
#include<string.h>
main()
{
	char s[50];
	int x, y,z,limit;

	clrscr();
	printf("Enter string :"); 	
	gets(s);

	limit = strlen(s);
	
	x=0;
	y = limit-1;

	for(z = 0; z < limit; z++)
	{	
		
		if(s[x] != s[y])
		{
		printf("Not a palyndrome.");
		exit(0);
		}
		x++;
		y--;
		
	}
	printf("THE STRING IS PALYNDROME :) ");
}	                                                               
					          		