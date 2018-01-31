#include<stdio.h>
#include<stdlib.h>
union student
{
int number;
char str[4];
short int number1[2];
};
union student data;
void main()
{

printf("Enter a Hexa decimal number for data.number:");
scanf("%x",&data.number);
printf("number=%d\t&number=%p\nstr=%s\t&str=%p\nnumber1[0]=%hu\t&number1[0]=%p\nnumber1[1]=%hu\t&number1[1]=%p\n",data.number,&data.number,data.str,&data.str,data.number1[0],&data.number1[0],data.number1[1],&data.number1[1]);

printf("Enter a Hexa decimal number for data.str:");
scanf("%x",data.str);
printf("number=%d\t&number=%p\nstr=%s\t&str=%p\nnumber1[0]=%hu\t&number1[0]=%p\nnumber1[1]=%hu\t&number1[1]=%p\n",data.number,&data.number,data.str,&data.str,data.number1[0],&data.number1[0],data.number1[1],&data.number1[1]);

printf("Enter a Hexa decimals number for data.number1[0] and data.number1[1]: ");
scanf("%x%x",&data.number1[0],&data.number1[1]);
printf("number=%d\t&number=%p\nstr=%s\t&str=%p\nnumber1[0]=%hu\t&number1[0]=%p\nnumber1[1]=%hu\t&number1[1]=%p\n",data.number,&data.number,data.str,&data.str,data.number1[0],&data.number1[0],data.number1[1],&data.number1[1]);

}
