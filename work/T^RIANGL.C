#include <stdio.h>
main()
{
	int x,y,row,col;
	clrscr();

	col=40;
	row = 5;

	for(x = 1; x <= 9; x++)
	{
		for(y = x; y >= 1; y--)
		{
			gotoxy(col,row);
			printf("%d",y);
			col+=2;
		}
		col = 40;
		row++;
	}
	row = 6;
	col = 38;

	for(x = 1; x <= 8 ; x++)
	{
		for(y = x; y >=1; y--)
		{
			gotoxy(col,row);
			printf("%d",y);
			col -= 2;
		}
		col = 38;
		row++;
	}
}