#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *file_pointer;
	char ch;
	file_pointer = fopen("sample.txt","r");
	
	if(file_pointer == NULL)

	{
		printf("This file Doesnt Exists...!!\n");
		exit(0);
	}

		
	while((ch = fgetc(file_pointer)) != EOF)
	{
		printf("%c", ch);

	}
	fclose(file_pointer);

	return 0;
}
