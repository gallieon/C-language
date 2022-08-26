// C Program to Convert Kelvin to Fahrenheit
#include <stdio.h>
int main(){
    float kel, F;
    
    // Taking input
    printf("Enter the temperature in Kelvin: ");
    scanf("%f", &kel);
    
    // Kelvin to fahrenheit conversion
    F = ((9.0 / 5) * (kel - 273.15)) + 32;
    
    // Display output
    printf("%.2f Kelvin = %.2f Fahrenheit", kel, F);
    return 0;
}
