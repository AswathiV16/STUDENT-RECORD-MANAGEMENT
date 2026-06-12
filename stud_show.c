#include"header.h"
void stud_show(struct student	*ptr)
{
	printf("-----------------------------------------------------------------\n");
	printf("|                       STUDENT DATABASE                        |\n");
	printf("-----------------------------------------------------------------\n");
	printf("| ROLL NUMBER |              NAME              |   PERCENTAGE   |\n");
	printf("-----------------------------------------------------------------\n");
	while(ptr!=0)
	{
		printf("|   %d         |    %s                      |  %.2f        |\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
	printf("-----------------------------------------------------------------\n");
}
