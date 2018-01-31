#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *file_pointer1, *file_pointer2;
	int count=0;
	char str[100];
	file_pointer2 = fopen("file.txt", "w");
	if((file_pointer1 = fopen("file1.txt","r")) == NULL)
	{
		printf("\nFile doesnt exists\n");
		exit(0);
	}
	else
	{
		while(fgets(str, 100, file_pointer1) != NULL )
		{
			count++;
			if(count%2 != 0) 
			fputs(str, file_pointer2);
			
		}		

	}
	printf("\nNo. of lines :: %d\n", count);
	fclose(file_pointer1);
	fclose(file_pointer2);
            return 0;
}

