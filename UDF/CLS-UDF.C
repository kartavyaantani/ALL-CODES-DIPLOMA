/* UDF - No Argument No Return - CLS() Fn. */
#include <stdio.h>
void CLS (void)
{
	int i ;

	for(i = 1 ; i <= 25 ; i++)
	{     printf("\n") ;  }

	gotoxy(1,1) ;

	return ;
}
main()
{
  	CLS() ;
	gotoxy(5,10) ;
	printf("This is Demo of CLS Function") ;
}
































