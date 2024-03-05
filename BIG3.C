
 /* Program to find the biggest no. out of 3 nos. - Complex condition */

 #include <stdio.h>
 main()
{
 int x,y,z;
 
 clrscr();
 
 printf("enter three nos.: ");
 scanf("%d,%d,%d" , &x,&y,&z);
 
 if ((x > y) && (x > z))
      printf("\nBiggest no is %d",x);
 else if ((y > x) && (y > z))
      printf("\nBiggest no is %d",y); 
 else if ((z > x) && (z > y))
      printf("\nBiggest no is %d",z);
 else 
      printf("All no are equal");

 printf("\n\tProgram Over");
}