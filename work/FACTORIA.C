#include <stdio.h>
int fact (int x);
main()
{
	int ans,n,r;
	clrscr();

	printf("Enter number to find factorial : ");
	scanf("%d",&n);
	printf("Enter value of r ::");
	scanf("%d",&r);
	ans = fact(n)/(fact(r)*(n-r));
	printf("Answer is : %d",ans);
}
int fact (int x)
{
	int f=1,i;
	for(i = x; i >= 1; i--)
	{
		f *= i;
	}
	return f;
}

