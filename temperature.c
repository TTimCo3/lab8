#include "methods.h"

#include <stdio.h>

int main(){
    int exit=0;
    while(exit==0){
        float temp=0;
        printf("Enter the temperature value: ");
        int input = scanf("%f", &temp);
        if(input==1){
            exit=1;
        }
        else{
            printf("invalid input.\n");
            while(getchar!='\n');
        }
    }
    exit=0;
    while(exit==0){
        char oldScale;
        printf("Enter the original scale (C, F, or K): ");
        scanf("%c", &oldScale);
        if(oldScale!='C' && oldScale!='F' && oldScale!='K'){
            printf("Invalid input, try again.\n");
        }
        else{
            exit=1;
        }
    }
    exit=0;
    while(exit==0){
        char newScale;
        printf("Enter the scale to conver to (C, F, or K): ");
        scanf("%c", &newScale)
        if(newScale!='C' && newScale!='F' && newScale!='K'){
            printf("Invalid input, try again.\n");
        }
        else{
            exit=1;
        }
    }
    if(newScale=='C'){
        convert2C(temp, oldScale)
    }
    elif(newScale=='F'){
        convert2F(temp, oldScale);
    }
    else{
        convert2K(temp, oldScale);
    }
    return 0;
}