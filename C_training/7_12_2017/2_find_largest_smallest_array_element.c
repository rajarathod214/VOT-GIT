#include<stdio.h>


int main()
{
	int array[100],index=-1,index1,small,large,length;


printf("\n Enetr array elements:\n");

do
{
	index++;
	printf("array[%d]=",index);
	scanf("%d",&array[index]);
} while(array[index]!=0);

	
	small=large=array[0];

	for(index1=1;index1<index;index1++)
	{
		if(array[index1]>large)
			large=array[index1];

		if(array[index1]<small)
			small=array[index1];
	}


	printf("\n smallest array element = %d \n laegest array element = %d\n",small,large);

return 0;
}
