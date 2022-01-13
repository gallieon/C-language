
#include <stdio.h>

int main()
{
    float side,l,w,square,v_r;
    printf("enter side of square\n");
    scanf("%f",&side);
    printf("enter the length of rectangle\n");
    scanf("%f",&l);
    printf("enter the width of the rectangle\n");
    scanf("%f",&w);
    square=side*side*side;
    v_r=2*(l+w);
    printf("volume of square: %f\n volume of rectangle: %f",square,v_r);
    getch();
    
}

