#include<stdio.h>
main()
{
	int n, i, limit;
	
	clrscr();
	printf (" enter digits in number : ");
	scanf ("%d", &limit);

	for (i = 0; i <= limit; i++)  
	{       
	        printf("enter no. : ");
	        scanf("%d" , &n);

	        switch (n)
	        {
		case 1 : printf("ONE");
		              break;
		case 2 : printf("TWO");
		              break;
		case 3 : printf("THREE");
		              break;
		case 4 : printf("FOUR");
		              break;
		case 5 : printf("FIVE");
		              break;
		case 6 : printf("SIX");
		              break;
		case 7 : printf("SEVEN");
		              break;
		case 8 : printf("EIGHT");
		              break;
		case 9 : printf("NINE");
		              break;
		default : printf("Wrong Input ");
	        }
	
		printf("\n\tProgram Over");
                  }
}
	 
