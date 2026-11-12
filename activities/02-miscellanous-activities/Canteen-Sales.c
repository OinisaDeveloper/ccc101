#include <stdio.h>

int main(){
    int days, int orders;
    float sale, total = 0;
    for (int days = 0; days <= 3; days++){
        for (int orders = 0; orders <=4; orders++){
            printf("Enter the total sale for this day: %d", orders);
            scanf("%f", &sale);
            total += sale;
        }1
    }
    printf("The total sales for the day is: %.2f", total);
}