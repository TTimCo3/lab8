#include "methods.h"

#include <stdio.h>

int main(){
    int score;
    while(score!=1){
        printf("Enter the NFL score (Enter 1 to stop): ");
        scanf("%d", &score);
        if(score>0){
            int safety=0;
            int fg=0;
            int td=0;
            int tdFg=0;
            int td2Pt=0;
            for(int i=0; i<score; i++){
            }
        }
        else{
            printf("Invalid input.");
        }
    }

    return 0;
}