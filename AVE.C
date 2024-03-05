#include <stdio.h>
main()
{
	int i,sum=0,ave,tot,a;
	clrscr();

	printf("Enter total numbers:");
	scanf("%d",&tot);

	for(i = 1 ; i <= tot ; i++)
	{
		printf("Enter number");
		scanf("%d",&a);
		sum += a;
	}
	ave = sum/tot;
	printf("The average is = %d",ave);
}