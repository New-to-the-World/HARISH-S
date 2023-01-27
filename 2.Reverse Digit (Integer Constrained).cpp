//Reverse Digit (Integer Constrained)
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
	int x=0,reverse=0,remainder;
	x=getIntegerOnly();
	printf("\n Integer value entered is: %d\n", x);
	if(x==0){
		printf("Error! Input is either not an Integer or '0'!!");
	}
	while(x>0){
		remainder=x%10;
		reverse=reverse*10+remainder;
		x=x/10;
	}
	if(reverse!=0){
		printf("Reversed digit is %d",reverse);
	}
	return 0;
}

