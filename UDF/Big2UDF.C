/* UDF - With Argument With Return */
#include <stdio.h>
int Big2(int x, int y) ;     /* Function Declaration - Function Prototype */
main()
{
  	int a,b,ans ;

	printf("Enter Two Nos : ") ;
	scanf("%d,%d", &a, &b) ;
	ans = Big2(a,b) ;		/* Function Call */
	printf("\nBig No. is = %d", ans) ;
}
int Big2(int x, int y)    /* Function Definition */
{
   	int big ;

	if (x > y)
	    big = x ;
	else
	    big = y ;

	return big ;
}
