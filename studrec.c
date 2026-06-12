#include"header.h"
void stud_add(struct student**);
void stud_del(struct student**);
void stud_show(struct student*);
void stud_mod(struct student**);
void stud_sort(struct student**);
void stud_save(struct student*);
int main(){
	printf("-----------------------------\n|    STUDENT RECORD MENU    |\n-----------------------------\n");
	printf("| A/a: Add New Record       |\n| D/d: Delete a Record      |\n| S/s: Show the List        |\n| M/m: Modify a Record      |\n| V/v:Save                  |\n| E/e:Exit                  |\n| T/t:Sort the List         |\n");
	printf("-----------------------------\n");

	struct student *hptr=0;
	char ch,op;
	printf("enter option 'A'\n");
	scanf(" %c",&ch);
	do
	{
		if(ch=='A'){
			do{
				stud_add(&hptr);
			        printf("Do you want to add one more student details?If yes then give i/p as A\n");
			        scanf(" %c",&ch);
			}while(ch=='A');
		}
		else if(ch=='D')
		{
			do{
                                stud_del(&hptr);
                                printf("Do you want to delete one more student details?If yes then give i/p as D\n");
                                scanf(" %c",&ch);
                        }while(ch=='D');
		}
		else if(ch=='M')
		{
			do{
                                stud_mod(&hptr);
                                printf("Do you want to modify one more student details?If yes then give i/p as M\n");
                                scanf(" %c",&ch);
                        }while(ch=='M');
		}
		else if(ch=='S')
                {
                        stud_show(hptr);
                }
		else if(ch=='T')
                {
                        do{
                                stud_sort(&hptr);
                                printf("Do you want to sort student details?If yes then give i/p as T\n");
                                scanf(" %c",&ch);
                        }while(ch=='T');
                }
		else if(ch=='V')
                {
			stud_save(hptr);
			break;
                }
		printf("enter option 'A' or 'D' or 'S' or 'M' or 'T' or 'V' to continue any function\n");
		scanf(" %c",&ch);
	}while(ch=='A' || ch=='D' || ch=='S'|| ch=='M'||ch=='T'||ch=='V');
}
