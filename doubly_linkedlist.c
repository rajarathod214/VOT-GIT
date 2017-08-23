#include<stdio.h>
#include<stdlib.h>

struct dll
{
	struct dll *prev;
	int info;
	struct dll *next;
}*head;

//struct dll *head;


void create(int data)
{
	struct dll *temp,*q;

	temp=(struct dll*)malloc(sizeof(struct dll));

	temp->info=data;

	temp->next=NULL;

	if(head==NULL)
	{
		head=temp;
		temp->prev=NULL;
	}

	else
	{
		q=head;

		while(q->next != NULL)
		{
			q=q->next;

		}

		q->next=temp;
		temp->prev=q;
			

	}

}

void display()
{
	struct dll *temp;

	temp=head;

	if(temp==NULL)
	{
		printf("\n List is empty \n");
		return;
	}


	else
	{
	printf("\n Data in the list :\n");	
		while(temp)
		{
			printf("|%p|%d(%p)|%p|-->",temp->prev,temp->info,temp,temp->next);
			temp=temp->next;

		}
	
	}

}

void main()
{
	int i, count, data,choice;
while(1)
{

	printf("\t\n ***********DLL**********\n");
	printf("\t 1] Create\n\t 2] Display\n\t 3] Exit");
	printf("\t\n ***********DLL**********\n");
	printf("\n Enter your choice:");
	scanf("%d",&choice);

	switch(choice)
	{
	
	case 1: printf("\n How many node you want:");
		scanf("%d",&count);
		
		for(i=0;i<count;i++)
		{
			printf("\n Enter %d data: ",i+1);
			scanf("%d",&data);
			create(data);
		}

		break;

	case 2: display();
		break;

	case 3: exit(1);
	
	default: printf("\n Enter right option\n");
	}
}
}



