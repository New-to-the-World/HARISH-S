#include <stdio.h>
int getIntegerOnly();
int main(){
	int x=0;
	x=getIntegerOnly();
	printf("\nvalue entered is: %d", x);
	}	
int getIntegerOnly(){
	int num=0,ch;
	printf("Enter the input: ");
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

