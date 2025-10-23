#ifndef METHODS_H
#define METHODS_H
int checkPrint(int td2pt, int tdfg, int td, int fg, int safety, int score);
float convert2C(float temp, char oldScale);
float convert2F(float temp, char oldScale);
float convert2K(float temp, char oldScale);
void tempReport(float newTemp, float oldTemp, char oldScale, char newScale);

#endif
