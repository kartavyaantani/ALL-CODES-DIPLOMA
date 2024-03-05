#include <stdio.h>
main()
{
	int i;

	struct date
	{
		int dd;
		int mm;
		int yy;
	};	
	struct class
	{
		char name[10];
		int    m[3];
		int    total;
		struct date dob;	
	};
	struct class s[5];
	
	clrscr();
	for(i = 0; i < 5; i++)
	{
		printf("Enter name : ");
		scanf("%s", s[i].name);
		printf("Enter 3 subjects marks :");
		scanf("%d,%d,%d",&s[i].m[0],&s[i].m[1],&s[i].m[2]);
		printf("Enter Date of birth : DD/MM/YY :\t ");
		scanf("%d/%d/%d", &s[i].dob.dd, &s[i].dob.mm, &s[i].dob.yy);		
		s[i].total = s[i].m[0] + s[i].m[1] + s[i].m[2];
	}
		
	printf("Result = \n");
	
	for(i = 0; i < 5; i++)
	{
		printf("\n%s\t%d %d %d\t %d",s[i].name, s[i].m[0], s[i].m[1], s[i].m[2], s[i].total);
		printf("\n%d/%d/%d",s[i].dob.dd, s[i].dob.mm, s[i].dob.yy);
	}
}
