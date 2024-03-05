#include <stdio.h>
main()
{
  	int first = 1, second = 1, third, no;

	clrscr() ;
	printf("\nEnter no : ") ;
	scanf("%d", &no) ;

	third = first + second ;

	while (third <= no)
	{

		first = second ;
		second = third ;
		third = first + second ;
		if (no == third)
		{
			printf ("\n%d is fibo number",no) ;
			getch();
			exit(0) ;
		}
	}

	printf("\n%d is not fibo number",no) ;
	getch() ;
}