/*Assemble the letters of given word(I/P) in ascending order)*/
#include <stdio.h>
#include <string.h>
main()
{
	char s[15],tmp;
	int i,x,length;
	clrscr();

	printf("Enter city name : ");
	gets(s);

	strupr(s);

	length = strlen(s);

	for(i = 0 ; i < length-2 ; i++)
	{
		for(x = i+1 ; x < length-1 ; x++)
		{
			if(s[i] > s[x])
			{
				tmp = s[i];
				s[i] = s[x];
				s[x] = tmp;
			}
		}
	}

	for(i = 0 ; i <=  length-1 ; i++)
	{
		printf("\n%c  %d",s[i],s[i]);
	}
}


