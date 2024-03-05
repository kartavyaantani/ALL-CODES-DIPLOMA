/*A poiter points towards five city names.Design UDF sort_city(char **c) that sorts city name */
#include <stdio.h>
#include <string.h>
void sort_city(char **c);
main()
{
	char *city[5] = {"Rajkot","Baroda","Surat","Anand","Jaipur"};

	clrscr();

	sort_city(city);
}

void sort_city(char **c)
{
	int x,y,i;
	char *tmp;

	for(x = 1; x <= 5; x++)
	{
		for(y = 0; y <= 3; y++)
		{
			i = strcmp(*(c + y) , *(c + y + 1));

			if(i > 0)
			{
				tmp = *(c + y) ;
				*(c + y) = *(c + y + 1);
				*(c + y + 1) = tmp;
			}
		}
	}

	for(y = 0; y < 5; y++)
		printf("%s\n",*(c + y));

	return ;
}
			





			  
			