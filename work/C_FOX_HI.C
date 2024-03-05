/*store 10 students name and their marks in c and fox.
	Find the highest marks in c and
	lowest marks in fox with student's name*/
#include <stdio.h>
#include <string.h>
main()
{
	int c,fox,bigc,smalfox,i;
	char name[15],bigname[15],smalname[15];
	clrscr();

	fflush(stdin);
	printf("Enter name of student : ");
	gets(bigname);
	printf("Enter marks of c: and fox: ");
	scanf("%d,%d",&bigc,&smalfox);
	strcpy(smalname,bigname);

	for(i = 1 ; i < 5 ; i++)
	{
		fflush(stdin);
		printf("Enter name of student : ");
		gets(name);
		printf("Enter marks of c: and fox: ");
		scanf("%d,%d",&c,&fox);

		if(bigc < c)
		{
			bigc = c;
			strcpy(bigname,name);
		}
		if(smalfox  > fox)
		{
			smalfox = fox;
			strcpy(smalname,name);
		}
	}

	printf("\nHighest marks in c are : %d - scored by %s.",bigc,bigname);
	printf("\nLowest marks in fox are: %d - scored by %s.",smalfox,smalname);
}






