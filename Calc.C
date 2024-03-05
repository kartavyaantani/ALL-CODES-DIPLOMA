/* Calculator  Program */
#include <stdio.h>
main()
{
  
	float n1, n2, ans ;
	char choice ;

	clrscr() ;
	printf("Enter No 1 : ") ;
	scanf("%f", &n1) ;

	printf("Enter No 2 : ") ;
	scanf("%f", &n2) ;

	printf("\n1. ADD(+) \n2. SUB(-) \n3. MUL(*) \n4. DIV(/)") ;
	printf("\nEnter Choice : ") ;
	fflush(stdin) ;
	scanf("%c", &choice) ;

	switch(choice)
	{
		case '+' : ans = n1 + n2 ;
			   break ;
	
		case '-' : ans = n1 - n2 ;
			   break ;

		case '*' : ans = n1 * n2 ;
			   break ;

		case '/' : ans = n1 / n2 ;
			   break ;

		default : printf("\nWrong Symbol..") ;
			  exit(0) ;
	}

	printf("\n\nAnswer = %.2f", ans) ;
}


  