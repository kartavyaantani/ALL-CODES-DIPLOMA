/*Create file DATA.dat  having several integers in it.After creation read numbers from DATA.dat file
and separate them in two other files ODD.dat and EVEN.dat */
#include <stdio.h>
main()
{
	FILE *f1, *f2, *f3;
	int number,i;

	clrscr();

	printf("Contents of data file\n\n");
	f1 = fopen("DATA.dat","w");

	for(i = 1; i <= 14; i++)
	{
		scanf("%d",&number);
		putw(number,f1);
	}
	fclose(f1);

	f1 = fopen("DATA.dat","r");
	f2 = fopen("ODD.dat","w");
	f3 = fopen("EVEN.dat","w");

	while((number = getw(f1)) != EOF)
	{
		if(number % 2 == 0)
			putw(number,f3);
		else
			putw(number,f2);
	}

	fclose(f1);
	fclose(f2);
	fclose(f3);

	f2 = fopen("ODD.dat","r");
	f3 = fopen("EVEN.dat","r");

	printf("\n\nContents of ODD file\n");
	while((number = getw(f2)) != EOF)
	{	printf("%4d",number);		}


	printf("\n\nContents of EVEN file\n");
	while((number = getw(f3)) != EOF)
	{	printf("%4d",number);		}

	fclose(f2);
	fclose(f3);
}
