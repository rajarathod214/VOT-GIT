#include<stdio.h>

void function(int,void(*fp)(int));
void function1(int);
void (*p)(int);

int main()
{
	int number;

	p=function1;

	printf("\n Enter the number to check prime:");
	scanf("%d",&number);

	function(number,p);

return 0;
}

void function(int number,void(*fp)(int))
{
	(*fp)(number);
}

void function1(int number)
{
	int loop,flag=0;

	for(loop=2;loop<number/2;loop++)
	{
		if(number%loop==0)
		{
			flag=1;
			break;			
		}
	}

	if(flag==0)
		printf("\n Prime \n");
	else
		printf("\n Not a Prime \n");

}
