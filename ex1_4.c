#include <stdio.h>

int main()
{
 float celsius, fahr, lower, upper, step;

 lower = 0;
 upper = 300;
 step = 20;

 celsius = lower;
 printf("Celsius   Fahr.\n");
 while(celsius <= upper) {
 	fahr = (9.0 / 5.0) * celsius + 32;
	printf("%5.0f %9.1f\n", celsius, fahr);
	celsius += step;
 }
}
