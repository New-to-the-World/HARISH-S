#include<stdio.h>
#include<conio.h>
int main()
{
	int a,fact=1,num;
	printf("enter the integer:");
	scanf("%d",&num);
	for(a=1;a<=num;a++)
	{
	fact=fact*a;	
	printf("the factorial of %d is:%d\n",num,fact);
}
return 0;
}
