#include "stdio.h"

void main(){
    int TECSON;
    int OIN;
    printf("Input a number: ");
    scanf("%d", &TECSON);
    OIN = TECSON;
    while(TECSON>=1){
        TECSON = TECSON - 2;
    }
    if(TECSON==0){
     printf("The number %d is even", OIN);
    }else{
     printf("The number %d is odd", OIN);
    }
}