/*write the biggest and smallest name and age of student's given (I/P) age*/
#include <stdio.h>
#include <string.h>
main()
{
	struct stud
	{
		char name[15];
		int age;
	};
	struct stud  s[5];
	int i,bigpos = 0 , smlpos = 0;

	clrscr();

	for(i = 0 ; i < 5 ; i++)
	{
		fflush(stdin);
		printf("\nEnter name of %d student : ",i+1);
		gets(s[i].name);

		printf("\nEnter age of %d student : ",i+1);
		scanf("%d",&s[i].age);
		printf("\n------------------------------------------");
	}



	for(i = 1 ; i < 5 ; i++)
	{
		if(s[bigpos].age < s[i].age)
		{
			bigpos = i;
		}

		if(s[smlpos].age > s[i].age)
		{
			smlpos = i;
		}
	}

	printf("\n Big age : %d \t Big name : %s",s[bigpos].age,s[bigpos].name);
	printf("\n Small age:%d \t Small name:%s",s[smlpos].age,s[smlpos].name);
}