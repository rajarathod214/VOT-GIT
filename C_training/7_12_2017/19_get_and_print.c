#include<stdio.h> 
#include<time.h> 
#include<string.h>

 
int main() 
{ 
	time_t sec; 
	int variable; 
	char arr[10][50]; 
	for(variable=0;variable<10;variable++) 
	{ 
    		sec = time (NULL); 
		strcpy(arr[variable],ctime(&sec)); 
		sleep(1); 
	} 
	printf("array times are\n"); 
	for(variable=0;variable<10;variable++) 
	{ 
		printf("%s",arr[variable]); 
		printf("\n"); 
	} 
return 0; 

}
