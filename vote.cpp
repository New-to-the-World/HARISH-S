#include<stdio.h>
int main()
{
	int a;
	printf("enter your age:");
	scanf("%d",&a);
	if(a>18)
	{
		printf("you're eligible for voting!!");
	}
	else
	{
		printf("you're not eligible for voting!!\n");
		printf("you still have %d years to wait",18-a);
		return 0;	
		}
}
