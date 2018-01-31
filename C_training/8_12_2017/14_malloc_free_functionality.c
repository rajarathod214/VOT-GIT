#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

int main()
{
	int index1=-1,index2;

	int *ptr=(int *)malloc(SIZE*sizeof(int));

	if(ptr==NULL)
	{
		printf("Fail to allocate memory \n");
		exit(0);
	}

	printf("\n Enter the elements:\n");

	do
	{
		index1++;
		printf("ptr[%d]=",index1);
		scanf("%d",&ptr[index1]);		
	}while(ptr[index1]>0);


for(index2=0;index2<index1;index2++)
{
	printf("array[%d]=%d\n",index2,*(ptr + index2));
}
free(ptr);
}
