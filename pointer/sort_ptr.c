/*Design UDF sort(int size, int *p) to sort given array pointed to by pointer 'p'. Also design UDF display
(int size, int *p) to display sorted array */
#include <stdio.h>
void sort(int size, int *p);
void display(int size, int *p);
main()
{
	int a[10] = {1,6,5,2,8,9,10,3,7,4};

	clrscr();
	sort(10,a);
	display(10,a);
}

void sort(int size, int *p)
{
	int x, y, tmp ;

	for(x = 1 ; x <= size ; x++)
	{
		for(y = 0 ; y <= size-2 ; y++)
		{
			if (*(p + y) > *(p +y+1))
			{
				tmp = *(p + y) ;
				*(p + y) = *(p +y+1) ;
				*(p +y+1) = tmp ;
			}
		}
	}
	return ;	
}

void display(int size, int *p)
{
	int x; 
		
	for(x = 0 ; x < size ; x++)
	{
		printf("%3d",*(p + x));
	}
	return ;
}









