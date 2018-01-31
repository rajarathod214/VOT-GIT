/********** program to insert an element into an array. Accept index from user.   ****************/


#include<stdio.h>

int main()
{
	int array[100],index,length,element,user_index;

	printf("\n Enter the length:");
	scanf("%d",&length);

	printf("\n Enter array element:\n");
	for(index=0;index<length;index++)
	{
		printf("array[%d]=",index);
		scanf("%d",&array[index]);
	}
	
	printf("\n Enetr the array index to enter element:");
	scanf("%d",&user_index);
	printf("\n Enter the element:");
	scanf("%d",&element);

	for(index=length-1;index>=user_index-1;index--)
	{
		array[index+1]=array[index];
	}

	array[user_index-1]=element;
	length++;
	

	printf("\n After insertion:\n");
	
	for(index=0;index<length;index++)
	{
		printf("array[%d]=%d\n",index,array[index]);

	}

}
