#include<stdio.h>


int main()
{
	int  array[3][3],row=3,col=3,index1,index2,(*p)[3];

		
	printf("\n Enter array elements:\n");

	for(index1=0;index1<row;index1++)
	{
		for(index2=0;index2<col;index2++)
		{
			printf("array[%d][%d]=",index1,index2);
			scanf("%d",&array[index1][index2]);
		}

	}

	
	p=&array;

		index2=0;

	printf("\n\n");
	
		for(index1=0;index2<row;index2++)
		{
			printf("array[%d][%d]=%d\n",index1,index2,array[index1][index2]);
		}



	
	
	

}
