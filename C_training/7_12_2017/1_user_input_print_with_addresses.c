#include<stdio.h>

int main()
{
	int array[100],index,length;


	printf("\n Enter the array length:");
	scanf("%d",&length);


	for(index=0;index<length;index++)
	{
		printf(" array[%d]=",index);
		scanf("%d",&array[index]);
	}

	printf("\n");

	for(index=0;index<length;index++)
	{
		printf(" array[%d]=%d address=%p\n",index,array[index],&array[index]);
	}

return 0;

}
