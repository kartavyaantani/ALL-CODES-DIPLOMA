/*Structure book has members : name, quty, unit_price, total_price, discount(10%).
Write a program that reads book name, quty, unit_price into array of structure.
Find out total value and discount using pointer to structure*/
#include <stdio.h>
main()
{
	struct book
	{
		char name[30];
		int qty;
		int unit_price;
		int total_price;
		int discount;
	}b[3];
	struct book *p;
	int i;
	p = b;

	clrscr();

	for(i = 0; i < 3; i++)
	{
		fflush(stdin) ;
		printf("Enter name: ");
		gets((p+i)->name);

		printf("Enter quantity: ");
		scanf("%d",&(*(p+i)).qty);

		printf("Enter unit price : ");
		scanf("%d",&(*(p+i)).unit_price);

		(p+i)->total_price = (p+i)->qty * (p+i)->unit_price;
		(p+i)->discount = (p+i)->total_price * 10 / 100;
                printf("\n.......................\n") ;
	}

	printf("\n*******************\n") ;

	for(i = 0; i < 3; i++)
	{
		printf("Name = %s\n",(p+i)->name);
		printf("Quantity= %d\n",(p+i)->qty);
		printf("Price = %d\n",(p+i)->unit_price);
		printf("Total = %d\n",(p+i)->total_price);
		printf("Discount = %d\n",(p+i)->discount);
		printf("\n.......................\n") ;
	}
}