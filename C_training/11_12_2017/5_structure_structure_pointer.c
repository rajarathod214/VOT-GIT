#include<stdio.h>

struct emp
{
	int number;
	char name[100];
};


int main()
{
	
	struct emp employee={1,"Rajiv"},*ptr;

	ptr=&employee;

	printf("\n Employee Number=%d Name=%s \n\n",ptr->number,ptr->name);

return 0;
	
	
}
