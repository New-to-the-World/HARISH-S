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
int main()  {  
	int num, rem, sum = 0, i;
	num= getIntegerOnly(); 
	printf("Integer Value : %d\n",num);       
	for(i = 1; i < num; i++){  
	    rem = num % i;  
		if (rem == 0)  {  
    	    sum = sum + i;  
    	}  
	}  
	if (sum == num)  
    	printf(" %d is a Perfect Number",num);  
	else  
		printf("\n %d is not a Perfect Number",num);  
	getch();  
}  
