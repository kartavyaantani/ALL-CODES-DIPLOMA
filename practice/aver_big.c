/*Read 10 nos. in array and display nos. that are bigger than average of given nos.*/
#include<stdio.h>
main()
{
	float n[10], ave, i, sum = 0;

	clrscr();

	for (i = 0 ; i < 10 ; i++)
	{

		printf("Enter number: ");
        		scanf("%f",&n[i]);
		sum = sum + n[i];
	}
	
	ave = sum/10;	
	printf("Average = %f", ave);
	
	printf("Nos.bigger than average : ");
	for (i = 0 ; i < 10 ; i++)	
	{
		if ( ave < n[i])
		{
		printf("%3f  ", n[i]);
		}
	} 
	
}