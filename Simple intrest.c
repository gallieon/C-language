#include <stdio.h>
#include <conio.h>
void main()
{
    int principal,rate,year;
    char f_n[20],l_n[20];
    float simpleinterest;
    printf("enter your full name\n");
    scanf("%s %s",&f_n,&l_n);
    printf("enter the number of years\n");
    scanf("%d",&year);
    printf("enter the principal\n");
    scanf("%d",&principal);
    printf("enter the rate\n");
    scanf("%d",&rate);
    simpleinterest=(principal*rate*year)/100;
    printf("your name is: Mr. %s %s\n",f_n,l_n);
    printf("Years:%d years\n",year);
    printf("Principal\n",principal);
    printf("simple intrest %f \n",simpleinterest);
    
    
    printf("thak you for using this programme");
    getch();
}

