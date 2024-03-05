#include <stdio.h>
main()
{
	char filename[10];
	FILE *fp1, *fp2;
	int     i, number;

	clrscr() ;

	fp1 = fopen("TEST", "w");
	for(i = 10; i <= 100; i += 10)
		 fprintf(fp1, "%d ",i);

	fclose(fp1);

	printf("\nEnter filename : ");

open_file:
	scanf("%s",filename) ;

	if((fp2 = fopen(filename,"r")) == NULL)
	{
		printf("Cannot open the file\n");
		printf("Type filename again : ");
		goto open_file;
	}
	else
	for(i = 1; i <= 20; i++)
	{
		fscanf(fp2, "%d ", &number);
		if(feof(fp2))
		{
			printf("\nRan out of data\n");
			break;
		}
		else
			printf("%d\n",number);
	}
	fclose(fp2);
}