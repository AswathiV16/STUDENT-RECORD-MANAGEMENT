#include"header.h"
void stud_sort(struct student **ptr)
{
	printf("--------------------------------------------\n");
	printf("|                SORT MENU                 |\n");
	printf("--------------------------------------------\n");
	printf("|            N/n: sort with name           |\n|            P/p: sort with percentage     |\n");
	printf("--------------------------------------------\n");
	struct student *temp=*ptr;
	struct student *t=*ptr;
	char ch;
	printf("enter option 'N' or 'P' to sort\n");
	scanf(" %c",&ch);
	int count=0,i=0,j;
	while(t!=0)
	{
		count++;
		t=t->next;
	}
	struct student **v=(struct student**)malloc(sizeof(struct student*));
	struct student *z;
	for(i=0;i<count;i++)
	{
		v[i]=temp;
		temp=temp->next;
	}
	if(ch=='N')
	{
		for(i=0;i<count;i++)
		{
			for(j=i+1;j<count;j++)
			{
				if(strcmp(v[i]->name,v[j]->name)>0){
					z=v[i];
					v[i]=v[j];
					v[j]=z;
				}
				if(strcmp(v[i]->name,v[j]->name)==0){
					if(v[i]->rollno>v[j]->rollno){
						z=v[i];
						v[i]=v[j];
						v[j]=z;
					}
				}
			}
		}
	}
	else if(ch=='P')
	{
		for(i=0;i<count;i++)
                {
                        for(j=i+1;j<count;j++)
                        {
                                if(v[i]->percentage<v[j]->percentage){
                                        z=v[i];
                                        v[i]=v[j];
                                        v[j]=z;
                                }
                                if(v[i]->percentage==v[j]->percentage){
                                        if(v[i]->rollno>v[j]->rollno){
                                                z=v[i];
                                                v[i]=v[j];
                                                v[j]=z;
                                        }
                                }
                        }
                }
	}
	printf("---------------------------SORTED LIST------------------------------\n");
	for(i=0;i<count;i++)
	{
		printf("rollno: %d name: %s   percentage: %.2f\n",v[i]->rollno,v[i]->name,v[i]->percentage);
	}
	printf("--------------------------------------------------------------------\n");
	free(v);
}
