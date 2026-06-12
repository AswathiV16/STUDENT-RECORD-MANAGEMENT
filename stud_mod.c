#include"header.h"
void modify(struct student*);
void stud_mod(struct student **ptr)
{
	printf("------------------------------------------\n");
	printf("|         SEARCH MENU(TO MODIFY)         |\n");
	printf("------------------------------------------\n");
	printf("|              R/r: Rollno               |\n|              N/n: Name                 |\n|              P/p: Percentage           |\n");
	printf("------------------------------------------\n");
	struct student *temp=*ptr;
	struct student *t=*ptr;
	char ch,n[50];
	int r;
	float p;
	printf("Enter choice to modify 'R' or 'N' or 'P'\n");
	scanf(" %c",&ch);
	if(ch=='R')
	{
		modify(temp);
	}
	else if(ch=='N')
	{
		printf("enter name\n");
		scanf("%s",n);
		while(t !=0)
		{
			if(strcmp(t->name,n)==0)
				printf("rollno: %d name: %s percentage: %.2f\n",t->rollno,t->name,t->percentage);
			t=t->next;
		}
		modify(temp);
	}
	/*else if(ch=='P')
	{
		printf("enter percentage\n");
                scanf("%f",&p);
                while(*ptr !=0)
                {
                        if((*ptr)->percentage==p)
                                printf("rollno: %d name: %s percentage: %.2f\n",(*ptr)->rollno,(*ptr)->name,(*ptr)->percentage);
                        *ptr=(*ptr)->next;
                }
                modify(temp);
	}*/
}
void modify(struct student *t)
{
	int r;
	char ch,n[50];
	float p;
	printf("enter rollno to modify\n");
	scanf("%d",&r);
	while(t !=0)
	{
		if(t->rollno==r)
		{
			printf("rollno: %d  name: %s  percentage: %.2f\n",t->rollno,t->name,t->percentage);
                        printf("-----------------------------------------------\n");
                        printf("|                  MODIFY MENU                |\n");
                        printf("-----------------------------------------------\n");
                        printf("|            N/n: Name to modify              |\n|            P/p: Percentage to modify        |\n");
                        printf("-----------------------------------------------\n");
			printf("enter option 'N' or 'P' to modify in rollno-%d\n",r);
			scanf(" %c",&ch);
			if(ch=='N')
			{
				printf("enter name\n");
			        scanf("%s",n);
				strcpy(t->name,n);
			}
			if(ch=='P')
			{
				printf("enter percentage\n");
				scanf("%f",&p);
				t->percentage=p;
			}
			break;
		}
		t=t->next;
	}
}
