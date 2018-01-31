/*******************  program to remove an element from an array. Accept index from user ***********************/

#include<stdio.h>

int main()
{
	int array[100],length,element,index,index1,flag=0;

	
	printf("\n Enter array length:");
	scanf("%d",&length);

	printf("\n Enter the array element:\n");
	for(index=0;index<length;index++)
	{
		printf("array[%d]=",index);
		scanf("%d",&array[index]);
	}


	printf("\n Enter the element to delete:");
	scanf("%d",&element);


	for(index=0;index<length;index++)
	{
		if(array[index]==element)
		{
			flag=1;

				for(index1=index;index1<length;index1++)
				{
					array[index1]=array[index1+1];
				}

			length--;
			
		}
	}


	if (flag==0)
		printf("\n No element found \n");
	else
	{
		printf("\n After deleting:\n");
	
		for(index=0;index<length;index++)
		{
			printf("array[%d]=%d\n",index,array[index]);
		}
	}
	

}
