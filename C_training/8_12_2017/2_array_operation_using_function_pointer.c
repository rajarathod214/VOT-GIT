#include<stdio.h>

void (*array_insert)(int*,int,int,int*);
void (*array_delete)(int*,int,int*);


void arrayinsert(int array[],int position, int data, int *length)
{
	int index;

	for(index=(*length)-1;index>=1;index--)
		array[index+1]=array[index];
	array[position-1]=data;
	*length=(*length)+1;
}

void arraydelete(int array[],int position, int *length)
{
	int index;
	
	for(index=position-1;index<(*length)-1;index++)
		array[index]=array[index+1];
	*length=(*length)-1;
}

void display(int array[],int length)
{
	int index;

	for(index=0;index<length;index++)
		printf("array[%d]=%d\n",index,array[index]);

	printf("\n");

}





int main()
{
	int array[100],length,choice,index,data,position;
	
	array_insert=arrayinsert;
	array_delete=arraydelete;

	printf("\n Enter array length :");
	scanf("%d",&length);


	printf("\n Enter array element:\n");
	for(index=0;index<length;index++)
	{
		printf("array[%d]=",index);
		scanf("%d",&array[index]);
	}	

	while(1)
	{

	printf("\n Enter your choice:\n 1.Insert \t 2. Delete \t 3. Display \t 4. Exit\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf("\n Enter array position and  element to insert:");
			scanf("%d%d",&position,&data);
			(*array_insert)(array,position,data,&length);
		
			printf("\n Element inserted successfully \n");
			break;

		case 2: printf("\n Enter position to delete:");
			scanf("%d",&position);
			
			(*array_delete)(array,position,&length);
			printf("Element deleted successfully\n");
			break;

		case 3: display(array,length);
			break;

		case 4: exit(1);

		default: printf("\n Please enter correct choice \n");
			
	}
	
	
	}
return 0;	
}



