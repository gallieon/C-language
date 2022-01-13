// #include <stdio.h>

// int main()
// {
//     int x=10,y=20,t;
//     printf("enter two integer\n");
//     printf("before swaping\n first integer: %d\n second integer: %d\n",x,y);
//     t=x;
//     x=y;
//     y=t;
//     printf("after swaping\n first integer: %d\n second integer: %d\n",x,y);
//     getch();
// }

#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y,z;
    printf("before swaping \n x =");
    scanf("%d",&x);
    printf("y =");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("after swaping:\n x = %d\n y = %d\n",x,y);

}


