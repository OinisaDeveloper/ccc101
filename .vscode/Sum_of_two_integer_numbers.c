#include <stdio.h>
int main(){
    int num1, num2;
    char decision;
    printf("Enter 1st number: ");
    scanf("%i", &num1);
    printf("Enter 2nd number: ");
    scanf("%i", &num2);
    printf("The sum of %i and %i is: %i\n", num1, num2, num1 + num2);
    printf("Do you want to try again? (y/n): ");
    scanf(" %c", &decision);
    return 0;
}