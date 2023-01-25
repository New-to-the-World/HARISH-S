#include<stdio.h>
int main()
{
	int a=2,b=3,c,d;
	c=a<b;
	d=(a>b)&&(c<b);
	printf("c=%d,d=%d",c,d);
	return 0;
}
