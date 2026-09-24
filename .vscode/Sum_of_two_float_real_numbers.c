#include <stdio.H>

int main (){
    float num1, num2;
    printf("Enter 1st number: ");
    scanf("%f", &num1);
    printf("Enter 2nd number: ");
    scanf("%f", &num2);
    printf("The sum of %f and %f is: %f\n", num1, num2, num1 + num2);
    return 0;
}