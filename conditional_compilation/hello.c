#include<stdio.h>
#include<stdlib.h>

int main()
{
	
#define D 0

#ifdef D
	printf("\n Hello world \n");

#else 
	printf("\n Hello raja \n");
#endif

return;
}
