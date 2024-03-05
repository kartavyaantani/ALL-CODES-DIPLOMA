/* Study of goto statement (Branching / Jumping) */
#include <stdio.h>
main()
{
	clrscr() ;
	printf("One...") ;
	goto xx ;		/* Forward Branching */

	yy : printf("Two...") ;
	goto zz ;		

	xx : printf("Three...") ;
	goto yy ;		/* Backward Branching */

	zz : printf("Fout...") ;
	printf("Program Over...") ;
}


  