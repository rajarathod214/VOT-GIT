#include<stdio.h>

struct time
{
	int hour;
	int min;
	int sec;
};

struct time start_time,stop_time;

int main()
{
	int ch;
	do
	{	
	printf("\n Enter the start time: Hour:Min:Sec=->");
	scanf("%d:%d:%d",&start_time.hour,&start_time.min,&start_time.sec);
	
		if( start_time.hour==0 && start_time.min==0 && start_time.sec==0)
			break;
		else
		{	
			printf("\n Enter the stop time: Hour:Min:Sec=->");
			scanf("%d:%d:%d",&stop_time.hour,&stop_time.min,&stop_time.sec);
			printf("\n Difference between time: %d:%d:%d \n",stop_time.hour-start_time.hour,stop_time.min-start_time.min,stop_time.sec-start_time.sec);

		}
	
	} while(1);
		
}
