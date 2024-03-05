/*Design UDF add_ary(int *a,int *b,int *c) where a,b,c are pointers to 2x3 array.Elements of array c should
contain the addition of respective elements of array a&b*/
#include <stdio.h>
void add_ary(int *a, int *b, int *c);
main()
{
	int a[2][3] = {{1,2,3},{4,5,6}},
	    b[2][3] = {{7,8,9},{10,11,12}}, c[2][3];

	clrscr();
	add_ary(a,b,c);
}

void add_ary(int *a, int *b, int *c)
{
	int x, y;
	int row_size = 3 ; /* 3 columns in each row */

	for(x = 0; x < 2 ; x++)
	{
		for(y = 0; y < 3; y++)
		{
			*(c+x*row_size+y) = *(a+x*row_size+y) + *(b+x*row_size+y);
		}
	}

	for(x = 0; x < 2 ; x++)
	{
		for(y = 0; y < 3; y++)
		{
			printf("%3d",*(c+x*row_size+y));
		}
		printf("\n");
	}
	return ;
}