/*program to study nested if statement*/

#include <stdio.h>
main()
{
	int a,b,c ;

	clrscr() ;
	printf("Enter 3 Nos : ") ;
	scanf("%d,%d,%d", &a, &b, &c) ;
	                                                                 
	if (a > b)                                                          
	{
		if (a > c)                               
		{                                        
			printf("First No. is Big") ;	 
		}

        }
             
	if (b > a)
	{
		if (b > c)
		{
			printf("second No. is Big") ;
		}
        }  
	if (c > a)
	{
		if (c > b)
		{
			printf("Third No. is Big") ;
		}
	}       
	if (a == b) 
	{
             if (a == c)
		{
		    printf("All Nos. are Equal") ;
		}
	}

	
	printf("\nProgram Over..") ;
}
		 	