// C Program to Calculate Perimeter of Rhombus
#include <stdio.h>
int main(){
    float side, perimeter;
    
    // Asking for input
    printf("Enter the side of the rhombus: ");
    scanf("%f", &side);
    
    // Calculating perimeter of rhombus
    perimeter = 4 * side;
    
    // Display output
    printf("The Perimeter of the rhombus = %.2f", perimeter);
    return 0;
}
