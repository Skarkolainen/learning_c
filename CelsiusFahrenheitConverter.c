#include <stdio.h>

int main(void)

{
    printf("Please enter a temperature value in Celsius or Fahrenheit: ");  

    float temperature_in;
    scanf("%f", &temperature_in);

    float temperature_celsius = (temperature_in - 32.0) * 5.0 / 9.0;
    float temperature_fahrenheit = temperature_in * 9.0 / 5.0 + 32;

    printf("%.2f Fahrenheit equals ", temperature_in);
    printf("%.2f Celsius. \n", temperature_celsius);

    printf("%.2f Celsius equals ", temperature_in);
    printf("%.2f Fahrenheit. \n\n", temperature_fahrenheit);

    return 0;
}
