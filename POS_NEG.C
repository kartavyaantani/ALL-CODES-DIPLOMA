#include <stdio.h>
main()
{
  int n, i, limit, pos, neg, zero;

  clrscr();
  pos = neg = zero = 0;

	printf("Enter limit : ");
	scanf("%d",&limit);

	for(i = 1 ; i <= limit ; i++)
	{
		printf("\nEnter no. : ");
		scanf("%d",&n);

		if (n < 0)
			neg++;
		else if(n == 0)
			zero++;
		else
			pos++;
	}
       	printf("\nTotal -ve no. = %d" , neg);
        printf("\nTotal +ve no. = %d" , pos);
	printf("\nTotal zeros = %d" , zero);
}   
	