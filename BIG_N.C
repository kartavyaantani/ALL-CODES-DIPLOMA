#include <stdio.h>
main()

{
	int n, big, i, limit;
	
	clrscr();

	printf("Enter Limit : ");
 	scanf("%d", &limit);
	
	printf("Enter number:");
	scanf("%d",&big);

	for (i = 1 ; i < limit ; i++)
	{
		printf("Enter number:");
        	scanf("%d",&n);

		if(big < n)
		{
		  big = n;
	                   }
                  }
	printf("Biggest no. is:%d",big);
}