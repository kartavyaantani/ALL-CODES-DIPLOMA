#include <stdio.h>
main()
{
	int i, n, sodd=0, seven=0, totodd = 0, toteven = 0, avodd=0, aveven=0;


	clrscr();

	for(i = 1; i <= 10 ; i++)
	{
		printf("Enter number : %d -  ", i);
		scanf("%d" , &n);
 		if( n % 2 != 0)
		{
		 totodd++ ;
		 sodd = sodd + n;
		}
		else 
		{
		 toteven++;
		 seven = seven + n;
		}
	}
	aveven = seven / toteven;
	avodd = sodd / totodd;
	printf("\n Average of odd nos = %d",avodd);
	printf("\n Average of even nos = %d",aveven);

}


