/* UDF returning multiple values */
void Sum_Av_Big(int a, int b, int *s, int *av, int *bg) ;
main()
{
	int p = 10, q = 20, sum, average, big ;

	clrscr() ;
	Sum_Av_Big(p,q,&sum, &average, &big) ;
	printf("\nSum = %d, \nAverage = %d, \nBig = %d",sum, average, big) ;
}
void Sum_Av_Big(int a, int b, int *s, int *av, int *bg)
{
	*s = a + b ;
	*av = (a + b) / 2 ;
	if (a > b)
		*bg = a ;
	else
		*bg = b ;
	return ;
}


