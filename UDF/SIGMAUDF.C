/* UDF - Argument But No Return - Sigma (N) */
#include <stdio.h>
void Sigma (int n) ;     /* Function Declaration - Function Prototype */
main()
{
    	clrscr() ;

	Sigma(100) ;   /* Function Call */
	Sigma(50) ;     /* Function Call */
}

void Sigma(int n)    /* Function Definition */
{

	int s = 0, i ;

	for (i = 1 ; i <= n ; i++)
	{    s = s + i ;   }

	printf("\nSigma %d is = %d", n, s) ;

	return ;
}



