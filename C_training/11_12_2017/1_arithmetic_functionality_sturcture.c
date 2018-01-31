#include<stdio.h>


struct arith
{		
	int sum;
	int sub;
	int mul;
	int div;
	int mod;
}result;
	

int main()
{
	int number1,number2;

	printf("\n Enter number1 and number2:");
	scanf("%d%d",&number1,&number2);

	result.sum=sum_fun(number1,number2);
	result.sub=sub_fun(number1,number2);
	result.mul=mul_fun(number1,number2);
	result.div=div_fun(number1,number2);
	result.mod=mod_fun(number1,number2);

	printf("sum=%d\n",result.sum);
	printf("sub=%d\n",result.sub);
	printf("mul=%d\n",result.mul);
	printf("div=%d\n",result.div);
	printf("mod=%d\n",result.mod);
	
return 0;
}

int sum_fun(int number1,int number2)
{
	return number1+number2;
}

int sub_fun(int number1,int number2)
{
	return number1-number2;
}

int mul_fun(int number1,int number2)
{
	
	return number1*number2;
}
int div_fun(int number1,int number2)
{
	return number1/number2;
}
int mod_fun(int number1,int number2)
{
	return number1%number2;
}
