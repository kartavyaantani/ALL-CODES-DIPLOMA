#include <stdio.h>
int prime(int x);
main()
{
	int n,i,YN,limit;
	clrscr();

	printf("Enter limit : ");
	scanf("%d",&limit);

	for(i = 2; i <= limit ; i++)
	{
	n =i;
	YN = prime(n);
	if(YN == 1)
		printf("\t %d ",n);

	}
}
int prime(int x)
{
	int i,ans;

	for(i = 2; i <= x-1 ; i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}