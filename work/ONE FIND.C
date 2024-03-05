#include <stdio.h>
main()
{
	int i,d,x,one = 0,start, stop;
	clrscr();

	printf("Enter start value : ");
	scanf("%d",&start);
	printf("Enter stop value : ");
	scanf("%d",&stop);
	for(i=start; i <= stop ;  i++)
	{
	 x = i;
	 while(1)
	 {
		d = x%10;
		x /= 10;
		if (d == 1)
		{
			one++;
		}
		if (x == 0)
		{
			break;
		}
	 }
	}
	printf("The number of 1's are : %d",one);
}