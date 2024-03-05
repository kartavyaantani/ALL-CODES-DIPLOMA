 /* Study of if ... else statement */
 #include <stdio.h>
 main()
 {
   int age ;

   clrscr() ;
   printf("Enter Age : ") ;
   scanf("%d", &age) ;
   if (age >= 18)
   {
      printf("\nYou Can Vote..") ;
   }
   else
   {
      printf("\nYou Can Not Vote..") ;
   }
   printf("\nProgram Over.. This is Next Statement") ;
 }



