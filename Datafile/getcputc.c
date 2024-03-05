#include <stdio.h>
main()
{
	FILE *fp;
	char c;
	clrscr();
	fp = fopen("DATA.dat","w");
	printf("Enter sentence : ");

	while((c = getchar()) != EOF)
	{	putc(c,fp);		}
	fclose(fp);

	printf("\nYou Entered : \n");
	fp = fopen("DATA.dat","r");
	
	while((c = getc(fp)) != EOF)
	{	printf("%c",c);	}
	fclose(fp);
}