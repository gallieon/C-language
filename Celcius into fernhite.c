#include <stdio.h>
#include <conio.h>
void main()
{
    int cel;
    float fer;
    printf("enter the temrature in celcius\n");
    scanf("%d",&cel);       
    fer=(cel*9/5)+32;
    printf(" %d degree celcius = %f degree Ferenhite",cel,fer);
    getch();
    
}

