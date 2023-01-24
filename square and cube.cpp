#include <stdio.h>
int main(){
    float num, square, cube;
    printf("Enter an integer: ");
    scanf("%f", &num);
    square = num * num;
    cube = num * num * num;
    printf("Square of %d is: %f \n", num, square);
    printf("Cube of %d is: %f", num, cube);    
    return 0;
}
