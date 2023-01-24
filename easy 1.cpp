//Arithmetic Operations
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int x,y,a,b,c,d,e,ch;
	printf("Enter the first element :");
	scanf("%d",&x);
	printf("Enter the second element :");
	scanf("%d",&y);
	printf("ARITHMETIC OPERATIONS!!\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Power\n");
	printf("Enter your choice(1-6):");
	scanf("%d",&ch);
	if(ch==1){
		a=x+y;
		printf("Sum is %d",a);
	}
	else if(ch==2){
		if(x>y){
			b=x-y;
			printf("Difference is %d",b);
		}
		else{
			b=y-x;
			printf("Difference is %d",b);
		}
	}
	else if(ch==3){
		c=x*y;
		printf("Product is %d",c);
	}
	else if(ch==4){
		d=x/y;
		printf("Value of %d divided by %d is %d",x,y,d);	
	}
	else if(ch==5){
		e=pow(x,y);
		printf("%d raised to power %d is %d",x,y,e);
	}
	else{
		printf("Invalid choice!!!");
	}
	return 0;
}

