#include"header.h"
void stud_add(struct student **ptr){
	int r;
	struct student *temp= (struct student*) malloc(sizeof(struct student));
	printf("enter name and percentage\n");
	scanf("%s%f",temp->name,&temp->percentage);
	if(*ptr==0){
		temp->rollno=1;
		temp->next=0;
		*ptr=temp;
	}
	else{
		struct student *last=*ptr;
		while(last->next != 0){
			last=last->next;
		}
		r=last->rollno;
		r+=1;
		temp->rollno=r;
		temp->next=0;
		last->next=temp;
	}
}
