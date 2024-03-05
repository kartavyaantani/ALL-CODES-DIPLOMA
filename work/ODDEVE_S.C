/*input several numbers,separate odd and even no.,sort in ascending order*/
#include <stdio.h>
main()
{
	int odd[10],even[10],x,i,p=0,q=0,tmp;
	clrscr();

	for(i = 1 ; i <= 10 ; i++)
	{
		printf("Enter number : ");
		scanf("%d",&x);
		if(x % 2 == 0)
		{
			even[p] = x;
			p++;
		}
		else
		{
			odd[q] = x;
			q++;
		}
	}

	p--;
	q--;

	for(i = 0 ; i < p ; i++)
	{
		for(x = i+1 ; x <= p ; x++)
		{
			if(even[i] > even[x])
			{
			  tmp = even[i];
			  even[i] = even[x];
			  even[x] = tmp;
			}
		}
	}

	for(i = 0 ; i < q ; i++)
	{
		for(x = i+1 ; x <= q ; x++)
		{
			if(odd[i] > odd[x])
			{
			  tmp = odd[i];
			  odd[i] = odd[x];
			  odd[x] = tmp;
			}
		}
	}

	printf("\nEven\n");
	for(i = 0 ; i <= p ; i++)
	{
		printf("\t %d",even[i]);
	}
	printf("\n");
	printf("Odd\n");
	for(i = 0 ; i <= q ; i++)
	{
		printf("\t %d",odd[i]);
	}
}