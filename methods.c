#include <stdio.h>

int checkPrint(int td2pt, int tdfg, int td, int fg, int safety, int score){
    if(((8*td2pt)+(7*tdfg)+(6*td)+(3*fg)+(2*safety))==score){
        printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",td2pt,tdfg,td,fg,safety);
    }
    return 0;
}