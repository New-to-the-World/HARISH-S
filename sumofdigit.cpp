#include<stdio.h>  
 int main()    
{    
int n,sum=0,m,N;
printf("Enter number of digits:");
scanf("%d",&N);    
printf("Enter a %d-digit number:",N);    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum of %d-digit number = %d",N,sum);    
return 0;  
}   
