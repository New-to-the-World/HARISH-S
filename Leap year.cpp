#include<stdio.h>
#include<conio.h>
int main(){
	int d,m,y;
	printf("Enter the year(dd/mm/yyyy):");
	scanf("%d/%d/%d",&d,&m,&y);
	if(d<32,m<13){
		if((y%400==0 )||((y%4==0)&&(y%100!=0))){
			printf("%d/%d/%d is a leap year",d,m,y);
		}
		else{
			printf("%d/%d/%d is not a leap year",d,m,y);
		}
	}
	else{
		printf("Invalid Format!!!");
	}
	return 0;	
}
