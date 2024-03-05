#include <stdio.h>
main()
{
	int x,i,sumodd=0,sumeven=0,avodd,aveven,totodd=0,toteven=0;
	clrscr();

	printf("Enter start value:");
	scanf("%d",&i);
	printf("Enter end value:");
	scanf("%d",&x);
	start:
	if( i % 2 == 0)
	{
		printf("\n%d : <even>",i);
		sumodd += i;
		totodd++;
	}
	else if (i % 2 != 0)
	{
		printf("\n%d : <odd>",i);
		sumeven += i;
		toteven ++;
	}
	i++;
	if (i <= x)
		goto start;
	avodd = sumodd/totodd;
	aveven = sumeven/toteven;
	printf("\nAverage of odd = %d",avodd);
	printf("\n\Average of even = %d",aveven);
}