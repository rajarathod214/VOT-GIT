#include<stdio.h>
#include<stdlib.h>
void main()
{
  FILE *file_pointer;
  int count=0;
  long int pos;
  char s[100];

  file_pointer=fopen("sample.txt","r");

  if(file_pointer==NULL)
  {
    printf("\n file unable to open\n");
    exit(1);
  }

  fseek(file_pointer,0,SEEK_END);

  pos=ftell(file_pointer);

  while(pos)
  {
    fseek(file_pointer,--pos,SEEK_SET);
    if(fgetc(file_pointer)=='\n')
    {
      if(count++==3)
          break;
    }
  }

  while(fgets(s,sizeof(s),file_pointer)!=NULL)
      printf("%s",s);

   fclose(file_pointer); 
}

