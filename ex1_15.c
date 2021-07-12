#include <stdio.h>

float fahrToCelConversion(float);

int main() {
    float fahr, lower, upper, step;
    lower   =   0;
    upper   =   300;
    step    =   20;

    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, fahrToCelConversion(fahr));
        fahr+= step;
    }

    return 0;
}

float fahrToCelConversion(float fahrValue) {
    return (5.0 / 9.0) * (fahrValue - 32.0);
}