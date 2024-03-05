/*sort the digits of given number(I/P)in ascending order*/
#include <stdio.h>
main()
{
	int i=0,y,x,tmp,a[5],no;
	clrscr();

	printf("Enter number to sort the digits : ");
	scanf("%d",&no);

	while(no != 0)
	{
		a[i++] =no%10;
		no/=10;
	}
	i--;

	for(x=0 ; x <= i ; x++)
	{
		for(y=0 ; y < i ; y++)
		{
			if(a[y] > a[y+1])
			{
				tmp = a[y];
				a[y] = a[y+1];
				a[y+1] = tmp;
			}
		}
	}

	for(x = 0 ; x <= i ; x++)
	{
		printf("%3d",a[x]);
	}
}