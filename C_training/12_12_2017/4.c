#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
        FILE *file_pointer;
        file_pointer = fopen("sample.txt", "r");
        int line_num = 1;
        int find_result = 0;
        char search[50], str[100];

        if(file_pointer == NULL)
        {
                printf("File Doesn't exists...!\n");
                exit(0);
        }

        printf("Which string you want to search??::");
        scanf("%s", search);


        while(fgets(str, 100, file_pointer) != NULL) 
	{
                if((strstr(str, search)) != NULL) 
		{
                        printf("A match found on line: %d\n", line_num);
                        printf("\n%s\n", str);
                        find_result++;

		                }
                line_num++;
        }

        if(find_result == 0) {
                printf("\nSorry, couldn't find a match.\n");
        }

        if(file_pointer) {
                fclose(file_pointer);
        }
        return(0);
}
