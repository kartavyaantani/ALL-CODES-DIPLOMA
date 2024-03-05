/* Passing an array to function as an argument */
#include <stdio.h>
void arg_ary_study(int a[]) ;

main()
{
  	int n[3] = {10,20,30} ;

	arg_ary_study(n) ;

	printf("\n%d,%d,%d",n[0],n[1],n[2]) ;
}

void arg_ary_study(int a[])
{
  	a[0] +=5 ;
	a[1] +=5 ;
	a[2] += 5 ;
	
	return ;
}