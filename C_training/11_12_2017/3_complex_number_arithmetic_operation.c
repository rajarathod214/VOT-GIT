#include<stdio.h>
#include<stdlib.h>


struct complex_str
{
	int real;
	int img;
};

struct complex_str struct1,struct2,sum,sub,mul;

struct complex_str add()
{
struct complex_str add_result;
add_result.real=struct1.real+struct2.real;
add_result.img=struct1.img+struct2.img;

return add_result;
}

struct complex_str subs()
{
	struct complex_str sub_result;
	sub_result.real=struct1.real-struct2.real;
	sub_result.img=struct1.img-struct2.img;
return sub_result;
}

struct complex_str muls()
{
	struct complex_str mul_result;
	
	mul_result.real=(struct1.real*struct2.real)-(struct1.img*struct2.img);
	mul_result.img=(struct1.img*struct2.real)+(struct1.real*struct2.img);
return mul_result;
}


int main()
{
	int choice,result;

	printf("\n Enter first complex number [real] number:");
	scanf("%d",&struct1.real);

	printf("\n Enter first complex number [Imaginary] number:");
	scanf("%d",&struct1.img);

	if(struct1.real==0 && struct1.img==0)
	exit(0);
	
	printf("\n Enter Second complex number [real] number:");
	scanf("%d",&struct2.real);

	printf("\n Enter second complex number [Imaginary] number:");
	scanf("%d",&struct2.img);

	while(1)
	{

	printf("\n Enter your choice for complex number operation:\n");
	
	printf("\n 1. Add \n 2. Sub \n 3. Mul \n 4. Exit \n  => ");
	scanf("%d",&choice);

	switch(choice)
	{
	
	case 1: sum=add();
		printf("\n%d+%di",sum.real,sum.img);
		break;
	case 2: sub=subs();
		printf("\n%d-%di",sub.real,sub.img);
		break;
			
	case 3:mul=muls();
		printf("\n%d+%di",mul.real,mul.img);
		break;

	case 4:exit(0);

	default:printf("\n Please give valid input \n");
		
	}

	}
}



