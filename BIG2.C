
  /* program to find big no. out ot two nos */
  #include <stdio.h>
  main()
  {
    int x,y ;

    clrscr() ;
    printf("Enter no1. : ") ;
    scanf("%d", &x) ;
    printf("Enter no2. : ") ;
    scanf("%d", &y) ;

    if (x > y)
      printf("\nFirst No. is Big.") ;
    else if (y > x)
      printf ("\nSecond No. is Big.") ;
    else
      printf("\nBoth Nos. are Equal.") ;

    printf("\nProgram Over.") ;
  }
