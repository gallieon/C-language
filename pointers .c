#include <stdio.h>
#include <conio.h>
void main()
{
        int number=50,*p;
        p=&number;
       printf("Address of p variable is %x \n",p);      
       printf("Value of p variable is %d \n",*p); 
}
