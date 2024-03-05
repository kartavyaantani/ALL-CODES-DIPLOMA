
  /* Study of if ... else if ladder */
  #include <stdio.h>
  main()
  {
     int per ;

     clrscr() ;

     printf("Enter Percentage : ") ;
     scanf("%d", &per) ;

     if (per >= 70)
       printf("\nDistinction") ;
     else if (per >= 60)
     	printf("\nFirst Class") ;
     else if (per >= 48)
       printf("\nSecond Class") ;
     else if (per >= 40)
       printf("\nThird Class") ;
     else
       printf("\nFail") ;

     printf("\n\nProgram Over..") ;


}