#include <stdio.h>
main()
{
	FILE *fp;
	int     qty, i;
	float  price, value;
	char  item[10], filename[10];

	printf("Input file name\n");
	scanf("%s",filename);
	fp = fopen(filename,"w");
	printf("Enter inventory data\n\n");
	printf("Item name	price	Quantity\n");
	for(i = 1; i <= 3; i++)
	{
		fscanf(stdin,"%s	%f	%d", item, &price, &qty);
		fprintf(fp,"%s	%f	%d",item, price, qty);
	}
	fclose(fp);
	fprintf(stdout, "\n\n");

	fp = fopen(filename, "r");
	
	printf("Item name	price	qty	value\n");
	for(i = 1; i <= 3; i++)
	{
		fscanf(fp,"%s	%f	%d",item,&price,&qty);
		value = price * qty;
		fprintf(stdout,"%-8s	%8.2f	 %8d	%11.2f\n",item,price,qty,value);
	}
	fclose(fp);	
}