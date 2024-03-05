/*Design UDF search(int n,int*p) where p is pointer to array of integer.If number is found in array it will
return the pointer to that no. otherwise NULL will be returned*/
#include <stdio.h>
int *search(int n,int *p);
main()
{
	int *ans, i, a[10] = {1,2,3,4,5,6,7,8,9,10};
	
	clrscr();
	printf("Enter search number : ");
	scanf("%d",&i);

	ans = search(i,a); 
	if(ans == NULL)
		printf("Number not found");
	else
		printf("Number found");
}

int *search(int n,int *p)
{
	int x;

	for(x = 0; x < 10; x++)
	{
		if(*(p+x) == n)
		{
			printf("\nPosition : %d", x) ;
			return (p+x);
		}
	}
	return('\0');
}