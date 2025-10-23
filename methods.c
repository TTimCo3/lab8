#include <stdio.h>

int checkPrint(int td2pt, int tdfg, int td, int fg, int safety, int score){
    if(((8*td2pt)+(7*tdfg)+(6*td)+(3*fg)+(2*safety))==score){
        printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",td2pt,tdfg,td,fg,safety);
    }
    return 0;
}

int convert2C(float temp, char oldScale){
    if(oldScale=='C'){
        temp
    }
    elif(oldScale=='F'){

    }
    else{

    }
}

int convert2F(float temp, char oldScale){
    if(oldScale=='C'){

    }
    elif(oldScale=='F'){

    }
    else{
        
    }
}

int convert2K(float temp, char oldScale){
    if(oldScale=='C'){

    }
    elif(oldScale=='F'){

    }
    else{
        
    }
}

tempReport(float newTemp, float oldTemp){
    float checkTemp=convert2C(oldTemp)
    printf("Converted temperature: %f F\n", newTemp);
    if(checkTemp<0){

    }
    elif(checkTemp>=0 && checkTemp<10){

    }
    elif(checkTemp>=10 && checkTemp<25){

    }
    elif(checkTemp>=25 && checkTemp<35){

    }
}