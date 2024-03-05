/* Swapping values using pointers in UDF  - Function Call By Reference */
#include <stdio.h>
void swap (int *p1, int *p2) ;
main()
{
 	int p,q ;

	clrscr() ;
	printf("Enter two values : ") ;
	scanf("%d,%d", &p, &q) ;
	
	printf("\nBefore swap : p = %d, q = %d",p,q) ;
	swap(&p, &q) ;         /* Call By Reference */
	printf("\nAfter swap : p = %d, q = %d",p,q) ;

}

void swap (int *p1, int *p2)
{
  	int tmp ;

	tmp = *p1;
	*p1 = *p2 ;
	*p2 = tmp ;

	return ;
}