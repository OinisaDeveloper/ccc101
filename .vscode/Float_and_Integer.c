#include <stdio.h>

int main(){
    int OIN;
    float TECSON;
    printf("Enter two numbers: ");
    scanf("%d %f", &OIN, &TECSON);
    if ( OIN > 0){
        printf(" %d is positive\n", OIN);
    } else if ( OIN < 0){
        printf(" %d is negative\n", OIN);
    }else{
        printf(" %d is neutral\n", OIN);
    }
    if ( TECSON > 0){
        printf(" %f is positive\n", TECSON);
    } else if ( TECSON < 0){
        printf(" %f is negative\n", TECSON);
    }else{
        printf(" %f is neutral\n", TECSON);
    }
}