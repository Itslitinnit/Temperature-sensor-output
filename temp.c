#include <stdio.h>

main() {
float temp;
printf("Enter temperature:");
scanf("%f",&temp);
if (temp < 0) {
        printf("Freezing weather");
}
else if (temp >= 0 && temp < 10) {
        printf("Very Cold weather");
}
else if (temp >=10 && temp < 20) {
        printf("Cold weather");
}
else if (temp >= 20 && temp < 30){
        printf("Normal weather");
}
else if (temp >= 30 && temp < 40){
        printf("its Hot");
}
else if (temp >= 40){
        printf("Its Very Hot");
 }
else {
        printf(" ");
}
}
