#include <stdio.h>
main()
{
	int i, small, big, tot,num;
	clrscr();

	printf("Enter total numbers :");
	scanf("%d",&tot);
	printf("Enter number 1:");
	scanf("%d",&big);
	small = big;
	for(i = 2; i <= tot; i++)
	{
		printf("Enter number %d:",i);
		scanf("%d",&num);
		if( num > big)
			big = num;
		if(num < small)
			small = num;
	}
	printf("\nSmallest number is: %d",small);
	printf("\nBiggest number is: %d",big);
}


