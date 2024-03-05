/*Design UDF findbig(int *a, int *b, int *c, int size) where a,b,c points three different arrays .Compare 
a & b array and put bigger respective element into array of c */
#include <stdio.h>
void findbig(int *a, int *b, int *c, int size);
main()
{
	int a[10] = {7,6,8,2,9,10,5,1,3,4,},
	     b[10] = {9,4,2,1,6,7,3,10,5,8},c[10];
	
	clrscr();
	findbig(a,b,c,10);
}
	
void findbig(int *a, int *b, int *c, int size)
{
	int x;

	for(x = 0; x < size; x++)
	{
		if(*(a + x) > *(b +x))
			*(c + x) = *(a + x);
		else
			*(c + x) = *(b + x);
	}

	for(x = 0; x < size; x++)
	{
		printf("%3d",*(c + x));
	}
	return ; 
}




