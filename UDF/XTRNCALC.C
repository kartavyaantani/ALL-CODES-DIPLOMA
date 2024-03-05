#include <stdio.h>
#include "myfunc.c"
main()
{
	float x,y,ans ;
	int choice;

	clrscr();
	printf("Enter no. 1: ");
	scanf("%f",&x);
	
	printf("Enter no. 2: ");
	scanf("%f",&y);

	printf("1:ADD\t2:SUB\t3:MUL\t4:DIV\nEnter choice :- ");
	scanf("%d",&choice);
	ans = calculator(x,y,choice);
	printf("Answer :- %f",ans);
}