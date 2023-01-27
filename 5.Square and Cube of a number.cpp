#include <stdio.h>
int main(){
    float num,square,cube;
    printf("Enter an integer: ");
    scanf("%f",&num);
    square=num*num;
    cube=num*num*num;
    printf("Square is: %f\n",square);
    printf("Cube is: %f",cube);    
    return 0;
}
