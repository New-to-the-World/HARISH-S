#include<stdio.h>
int main()
{
int array[5]={120,313,194,1905,889};
int a,b;
a=0;
for(b=5;b>=0;b--)	
{
	a=a+array[b];
}
printf("sum of array is %d",a);
return 0;
}
