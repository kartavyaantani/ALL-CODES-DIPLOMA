/*Read 10 nos. in array and find out the biggest and smallest no out of them */
#include<stdio.h>
main()
{
	int n[10], big, small, i;

	clrscr();



	for (i = 0 ; i < 10 ; i++)
	{

		printf("Enter number:");
        		scanf("%d",&n[i]);
	}

	big = small = n[0];
		
	for(i = 1; i < 10; i++)
	{
	 	if (big < n[i])
		{
		  big = n[i];
		}		
		if (small > n[i])
		{
		   small = n[i];
		}
	}
		printf("The biggest no. is : %d" ,big);
		printf("The smallest no. is : %d" ,small);
		 
		 
}
