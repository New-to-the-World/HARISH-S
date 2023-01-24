//Reverse Digit
#include<stdio.h>
#include<conio.h>
int main(){
	int n,reverse=0,remainder;
	printf("Enter an integer :");
	if(scanf("%d",&n)){
	while(n>0){
		remainder=n%10;
		reverse=reverse*10+remainder;
		n=n/10;
	}
	printf("Reversed digit is %d",reverse);
}
	else{
		printf("Given input is not an integer");
	}
	return 0;
}
