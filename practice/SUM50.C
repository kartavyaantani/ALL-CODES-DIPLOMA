/*Generate following :
	1	2	3	4	5	<sum>
	6	7	8	9	10	<sum>
	...
	46	47	48	49	50	<sum>
--------------------------------------------------------------------------------------------
*/	
#include<stdio.h>
main()
{
	int i, sum = 0;

	clrscr();

	for(i = 1; i <= 50; i++)
	{
		printf("%4d",i);
		sum = sum + i;
		if(i % 5 ==0)
		{
			printf("%6d",sum);
			printf("\n");
			sum = 0;
		}
	}

}