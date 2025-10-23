#include "methods.h"

#include <stdio.h>

int main(){
    int score=0;
    while(score!=1){
        printf("Enter the NFL score (Enter 1 to stop): ");
        int input = scanf("%d", &score);
        if(score>=0 && score!=1 && input==1){
            printf("Possible combinations of scoring plays if a team's score is %d:\n", score);
            for(int safety=0; safety<=(score/2); safety++){
                for(int fg=0; fg<=(score/3); fg++){
                    for(int td=0; td<=(score/6); td++){
                        for(int tdfg=0; tdfg<=(score/7); tdfg++){
                            for(int td2pt=0; td2pt<=(score/8); td2pt++){
                                checkPrint(td2pt,tdfg,td,fg,safety,score);
                            }
                        }
                    }                  
                }
            }
        }
        else if(score!=1){
            printf("Invalid input. Enter a positive integer.\n");
            while(getchar() != '\n');
        }
    }
    return 0;
}