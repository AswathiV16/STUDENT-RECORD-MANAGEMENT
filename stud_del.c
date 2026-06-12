#include"header.h"
void stud_del(struct student **ptr)
{
	printf("-----------------------------\n|        DELETE MENU        |\n-----------------------------\n");
	printf("|   R/r: Rollno to delete   |\n|   N/n: Name to delete     |\n");
	printf("-----------------------------\n");
	char ch,n[50];
	int r;
	printf("enter choice to delete(R or N)\n");
	scanf(" %c",&ch);
	if(ch=='R')
	{
label:
		printf("enter rollno to delete\n");
		scanf("%d",&r);
		struct student *last=*ptr;
		struct student *prev;
		while(last!=0)
		{
			if(last->rollno == r)
			{
				printf("rollno: %d name: %s percentage: %f\n",last->rollno,last->name,last->percentage);
				if(last==*ptr)
					*ptr=last->next;
				else
					prev->next=last->next;
				free(last);
				return;
			}
			else
			{
				prev=last;
				last=last->next;
			}
		}
	}
	else if(ch=='N')
	{
		printf("enter name\n");
		scanf("%s",n);
		struct student *last=*ptr;
		struct student *prev;
		while(last!=0)
		{
			if(strcmp(last->name,n)==0)
			{
				printf("rollno: %d name: %s percentage: %f\n",last->rollno,last->name,last->percentage);
			}
			if(last->next==0)
			{
				goto label;
			}
			last=last->next;
		}
	}
}
