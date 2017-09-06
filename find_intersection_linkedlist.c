#include<stdio.h>
#include<stdlib.h>


struct emp
{
	int edata;
	struct emp *link;
}*start1,*start2;


void create1(int data1)
{
	

	struct emp *temp1,*q1;

	temp1=(struct emp*)malloc(sizeof(struct emp));

	temp1->edata=data1;


	temp1->link=NULL;


	if(temp1->link == NULL)
	{
		start1=temp1;
	}

	else
	{
		q1=start1;
		
		while(q1->link != NULL)
		{
			q1=q1->link;

		}
		
		q1->link=temp1;
	}

}

void create2(int data2)
{
	

	struct emp *temp2, *q2;

	temp2=(struct emp*)malloc(sizeof(struct emp));

	temp2->edata=data2;


	temp2->link=NULL;


	if(temp2->link == NULL)
	{
		start2=temp2;
	}

	else
	{
		q2=start2;
		
		while(q2->link != NULL)
		{
			q2=q2->link;

		}
		
		q2->link=temp2;
	}


}

void display()
{
	
	struct emp *temp1=start1,*temp2=start2;


	if(temp1==NULL)
	{
		printf("\n List 1 is empty \n");
	}

	if(temp2==NULL)
	{
		printf("\n List 2 is empty \n");
	}


	while(temp1)
	{
		printf(" %d ->",temp1->edata);
		temp1=temp1->link;
	}

	while(temp2)
	{
		printf(" %d ->",temp2->edata);
		temp2=temp2->link;
	}

}

void intersection()
{
	struct emp *p,*q,*temp1,*temp2;
	unsigned int i, len1=0,len2=0,diff;

	temp1=start1;
	temp2=start2;

	while(temp1)
	{
		temp1=temp1->link;
		len1++;
		printf("\n len1 = %d\n",len1);
	}
	
	while(temp2)
	{
		temp2=temp2->link;
		len2++;
		printf("\n len2 = %d\n",len2);
	}

	diff=len1-len2;
	
	
	p=start1;
	q=start2;

	for(i=0;i<diff;i++)
	{
		p=p->link;

	}	

	
	while(p!=q)
	{
		
		p=p->link;
		q=q->link;
		
		if(p==q)
		{
			printf("\n Intersection at %d \n", p->edata);
			break;
		}
	}


}

int main()
{
	int choice , i ,count1,count2, data1, data2;

while(1)
{
	printf("\n ******************************************* \n");
	printf("\n \t 1] Create list \n");
	printf("\n \t 2] Display list \n");
	printf("\n \t 3] Intersection \n");
	printf("\n \t 4] Exit \n");
	printf("\n ******************************************* \n");

	printf("\n Enter your choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		

	case 1: printf("\n How many node you want for list 1:");
		scanf("%d",&count1);
		

		printf("\n How many node you want for list 2:");
		scanf("%d",&count2);


		for(i=0;i<count1;i++)
		{
			printf("%d of list1:",i);
			scanf("%d",&data1);
			create1(data1);
		}

		printf("\n");
		for(i=0;i<count2;i++)
		{
			printf("%d of list2:",i);
			scanf("%d",&data2);
			create2(data2);
		}
		

		break;

	case 2: display();
		break;

	case 3: intersection();
		break;

	case 4: exit(0);

	default: printf("\n Please enter correct choice \n");

	}


}
}
