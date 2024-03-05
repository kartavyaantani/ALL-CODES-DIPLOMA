/* Study of Command Line Argument */
#include <stdio.h>
main(int argc, char *argv[])
{
	FILE *fp ;
	char c ;
	clrscr() ;
	if (argc != 2)
	{
		printf("Wrong Command.") ;
		exit(0) ;
	}
	printf("\nWelcome to Utility Developed By Kartavya..: \n\n") ;
	printf("argc = %d, argv[0] = %s, argv[1] = %s\n", argc, argv[0], argv[1]) ;

	fp = fopen(argv[1], "r") ;
	if (fp == NULL)
	{
		printf("\nFile can not be opened..") ;
		exit(0) ;
	}

	while (1)
	{
		fscanf(fp, "%c", &c) ;
		if (feof(fp))
		{
			printf("\nData Over..") ;
			break ;
		}
		printf("%c", c) ;
	}
	fclose(fp) ;
}


