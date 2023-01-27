#include<stdio.h>
#include<conio.h>
int getIntegerOnly();
int getIntegerOnly(){
	int num=0,ch;
	printf("Only Integer values are Proceeded (Except '0')!!!\n");
	printf("Enter the integer: ");
	do{
		ch=getchar();
		if(ch>=48&&ch<=57){
			num=num*10+(ch-48);
		}
		if(ch=='\n')
			break;
	}
	while(1);
	return (num);
}
int main(){
    int x,fact=1,n;
    n=getIntegerOnly();
    printf("Integer value : %d\n",n);
    for(x=1;x<=n;x++)
        fact=fact*x; 
    printf("Factorial of %d is: %d",n,fact);
    return 0;
}
