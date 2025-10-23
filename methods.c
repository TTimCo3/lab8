#include <stdio.h>

int checkPrint(int td2pt, int tdfg, int td, int fg, int safety, int score){
    if(((8*td2pt)+(7*tdfg)+(6*td)+(3*fg)+(2*safety))==score){
        printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",td2pt,tdfg,td,fg,safety);
    }
    return 0;
}

float convert2C(float temp, char oldScale){
    float newTemp=0;
    if(oldScale=='C'){
        newTemp=temp;
    }
    else if(oldScale=='F'){
        newTemp=((temp-32)*(5.0/9.0));
    }
    else{
        newTemp=(temp-273.15);
    }
    return newTemp;
}

float convert2F(float temp, char oldScale){
    float newTemp=0;
    if(oldScale=='C'){
        newTemp=(temp*(9.0/5.0))+32;
    }
    else if(oldScale=='F'){
        newTemp=temp;
    }
    else{
        newTemp=((temp-273.15)*(9.0/5.0))+32;
    }
    return newTemp;
}

float convert2K(float temp, char oldScale){
    float newTemp=0;
    if(oldScale=='C'){
        newTemp=temp+273.15;
    }
    else if(oldScale=='F'){
        newTemp=((temp-32)*(5.0/9.0))+273.15;
    }
    else{
        newTemp=temp;
    }
    return newTemp;
}

void tempReport(float newTemp, float oldTemp, char oldScale, char newScale){
    float checkTemp=convert2C(oldTemp, oldScale);
    printf("Converted temperature: %.2f %c\n", newTemp, newScale);
    if(checkTemp<0){
        printf("Temperature category: Freezing\n");
        printf("Weather advisory: Get cozy indoors!\n");
    }
    else if(checkTemp>=0 && checkTemp<10){
        printf("Temperature category: Cold\n");
        printf("Weather advisory: Wear a jacket!\n");
    }
    else if(checkTemp>=10 && checkTemp<25){
        printf("Temperature category: Comfortable\n");
        printf("Weather advisory: Enjoy the day!\n");
    }
    else if(checkTemp>=25 && checkTemp<35){
        printf("Temperature category: Hot\n");
        printf("Weather advisory: Drink lots of water!\n");
    }
    else{
        printf("Temperature category: Extreme Heat\n");
        printf("Weather advisory: Stay indoors!\n");
    }
}