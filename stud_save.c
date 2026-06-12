#include"header.h"
void stud_save(struct student *ptr)
{
	printf("-------------------------------------------------\n");
	printf("|                   SAVE MENU                   |\n");
	printf("-------------------------------------------------\n");
	printf("|              S/s: Save and exit               |\n|              E/e: Exit without saving         |\n");
	printf("-------------------------------------------------\n");
	FILE *fp;
	fp=fopen("student.dat","w");
	if(fp==NULL)
	{
		printf("file not opened\n");
		return;
	}
	char ch,c='0';
	printf("enter options 'S' or 'E'\n");
	scanf(" %c",&ch);
	/*while(c=fgetc(fp)!=EOF)
	{
		if(ch!='0')
		{
			fseek(fp,0,2);
			break;
		}
	}*/
	if(ch=='S')
	{
		while(ptr!=0)
		{
			fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
			ptr=ptr->next;
		}
		printf("saved successfully\n");
	}
	if(ch=='E')
	{
		printf("exit without saving\n");
		return;
	}
	fclose(fp);
}
