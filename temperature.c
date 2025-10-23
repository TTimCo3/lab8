#include "methods.h"

#include <stdio.h>

int main(){
    char newScale;
    char oldScale;
    float temp=0;
    int exit=0;
    while(exit==0){
        printf("Enter the temperature value: ");
        int input = scanf("%f", &temp);
        if(input==1){
            exit=1;
        }
        else{
            printf("invalid input.\n");
            while(getchar()!='\n');
        }
    }
    exit=0;
    while(exit==0){
        printf("Enter the original scale (C, F, or K): ");
        scanf(" %c", &oldScale);
        if(oldScale!='C' && oldScale!='F' && oldScale!='K'){
            printf("Invalid input. It's case sensitive.\n");
        }
        else{
            exit=1;
        }
    }
    exit=0;
    while(exit==0){
        printf("Enter the scale to convert to (C, F, or K): ");
        scanf(" %c", &newScale);
        if(newScale!='C' && newScale!='F' && newScale!='K'){
            printf("Invalid input. It's case sensitive.\n");
        }
        else{
            exit=1;
        }
    }
    if(newScale=='C'){
        tempReport(convert2C(temp, oldScale), temp, oldScale, newScale);
    }
    else if(newScale=='F'){
        tempReport(convert2F(temp, oldScale), temp, oldScale, newScale);
    }
    else{
        tempReport(convert2K(temp, oldScale), temp, oldScale, newScale);
    }
    return 0;
}