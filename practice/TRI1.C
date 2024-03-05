/*Generate following:
	1
	2	1
	3	2	1
	...
	9	8	7	6	5	4	3	2	1
*/
#include<stdio.h>
main()
{
	int x, y, row, col;

	clrscr();
	row = 5;
	col = 40;

	for(x = 1; x <= 9; x++)
	{
		for(y = x; y >= 1; y--)
		{
			gotoxy(col,row);
			printf("%d",y);
			col = col + 2;
		}
		col = 40;
		row++;
	}

	row = 6;
	col = 38;

	for(x = 1 ; x <= 8; x++)
	{
		for(y = x; y >= 1; y--)
		{
			gotoxy(col,row);
			printf("%d",y);
			col = col - 2;
		}
		col = 38;
		row++;
	}
}
	

	




