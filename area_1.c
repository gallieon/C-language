// C Program to Find the Area of a Semicircle
#include <stdio.h>
int main(){
    float r, area;
    
    // Asking for input
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    
    // Calculating area of semicircle
    area = (3.14) * (0.5) * r * r;
    
    // Display area
    printf("Area of the semicircle = %.2f", area);
    return 0;
}
