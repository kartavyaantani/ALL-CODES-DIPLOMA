float x,y,ans;
void read(void)
{
	printf("Enter no. 1:")
	scanf("%f",&x);
	
	printf("Enter no. 2:")
	scanf("%f",&y);
	return;
}
void calculator(int choice)
{
	switch(choice)
	{
		case 1 : ans = x + y;
		             break;
		case 2 : ans = x - y;
		             break;
			
		case 3 : ans = x * y;
		             break;
			
		case 4 : ans = x % y;
		             break;
			
	}
	return;
}		