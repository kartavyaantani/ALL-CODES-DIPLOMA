/* Command Line Argument program to copy source file to target file */
#include <stdio.h>
main(int argc, char *argv[])
{
	FILE *fp1, *fp2 ;
	char c ;
	clrscr() ;
	if (argc != 3)
	{
		printf("Syntax: MyCopy <source file> <Target file>") ;
		exit(0) ;
	}
	printf(" Source = %s,  Target = %s\n",  argv[1], argv[2]) ;

	fp1 = fopen(argv[1], "r") ;
	fp2 = fopen(argv[2], "w") ;
	if ((fp1 == NULL) || (fp2 == NULL))
	{
		printf("\nFile can not be opened..") ;
		exit(0) ;
	}

	while (!feof(fp1))
	{
		fscanf(fp1, "%c", &c) ;
		fprintf(fp2, "%c", c);
	}
	fclose(fp1) ;
	fclose(fp2) ;
	printf("\nFile successfully copied\n");
}