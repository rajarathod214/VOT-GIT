#include<stdio.h>

int main()
{
	int array[100], index, length,*first,*last;

	printf("\n Enter the array length:");
	scanf("%d",&length);


	printf("\n Enter the array elements: \n");
	for(index=0;index<length;index++)
	{
		printf(" array[%d]=",index);
		scanf("%d",&array[index]);
	}


	first=&array[0];
	last=&array[length-1];

//	printf("\n first=%d last=%d\n\n",first,last);
	printf("\n pointer substraction= %d value substraction=%d \n",last-first,*last - *first);

//
//	for(index=0;index<length;index++)
//	{
//		printf("address array[%d]=%d\n",index,&array[index]);
//	}	

return 0;
	



}
