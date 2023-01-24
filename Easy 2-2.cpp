//Reverse String Using Recursion
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
char word[40];
int leng,n;
printf("Please insert the string you want to reverse: ");
scanf("%s",word );
leng=strlen(word);
for(n=leng-1;n>=0;n--){
     printf("%c",word[n]);
}
return 0;
}


