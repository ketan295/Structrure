#include<stdio.h>

struct Students
{
    int emp_id,emp_age,emp_experience;
    char emp_name[100],emp_city[100],emp_company_name[100],emp_role[100];
      
}s[100];

main()
{
	int n,i;
	printf("Enter how many employee detail do you want :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter employee id:");
		scanf("%d",&s[i].emp_id);
		printf("Enter employee age:");
		scanf("%d",&s[i].emp_age);
		printf("Enter employee experience:");
		scanf("%d",&s[i].emp_experience);
		printf("Enter employee name:");
		scanf("%s",&s[i].emp_name);
		printf("Enter employee city:");
		scanf("%s",&s[i].emp_city);
		printf("Enter employee company name :");
		scanf("%s",&s[i].emp_company_name);
		printf("Enter employee role :");
		scanf("%s",&s[i].emp_role);
	}
	printf("\n_______________________________________________\n");
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("employee id           :%d\n",s[i].emp_id);
		printf("employee age          :%d\n",s[i].emp_age);
		printf("employee experience   :%d\n",s[i].emp_experience);
		printf("employee name         :%s\n",s[i].emp_name);
		printf("employee city         :%s\n",s[i].emp_city);   
		printf("employee company name :%s\n",s[i].emp_company_name);
	    printf("employee role         :%s\n",s[i].emp_role);
			
			
	}
}
