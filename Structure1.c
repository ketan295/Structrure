#include<stdio.h>

struct Students
{
    int stu_id,stu_age,stu_std;
    char stu_name[100],stu_course[100],stu_city[100],stu_school[100];
      
}s[100];

main()
{
	int n,i;
	printf("Enter how many student detail do you want :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter student id:");
		scanf("%d",&s[i].stu_id);
		printf("Enter student standard:");
		scanf("%d",&s[i].stu_std);
		printf("Enter student age:");
		scanf("%d",&s[i].stu_age);
		printf("Enter student name:");
		scanf("%s",&s[i].stu_name);
		printf("Enter student course:");
		scanf("%s",&s[i].stu_course);
		printf("Enter student city:");
		scanf("%s",&s[i].stu_city);
		printf("Enter student school:");
		scanf("%s",&s[i].stu_school);
	}
	printf("\n_______________________________________________\n");
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Student id:%d\n",s[i].stu_id);
		printf("Student standard:%d\n",s[i].stu_std);
		printf("Student age:%d\n",s[i].stu_age);
		printf("Student name:%s\n",s[i].stu_name);
		printf("Student course:%s\n",s[i].stu_course);
		printf("Student city:%s\n",s[i].stu_course);
		printf("Student city:%s\n",s[i].stu_city);
		printf("Student school:%s\n",s[i].stu_school);
			
			
	}
}
