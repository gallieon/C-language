// C Program to Convert Fahrenheit to Kelvin
#include <stdio.h>
int main(){
    float F, kel;
    
    // Taking input
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &F);
    
    // Fahrenheit to kelvin conversion 
    kel = ((5.0 / 9) * (F - 32)) + 273.15;
    
    // Display output
    printf("%.2f degree Fahrenheit = %.2f Kelvin", F, kel);
    return 0;
}

