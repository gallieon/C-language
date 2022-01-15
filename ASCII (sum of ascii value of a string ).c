#include <stdio.h>
#include <conio.h>
void main()
{
    int sum=0,i=0;
    char name[30];
    printf("enter the name\n");
    scanf("%s",&name);
    while(name[i]!='\0')
    {
        printf("\nASCII value of %c is: %d \n",name[i],name[i]);
        sum=sum+name[i];
        i++;
    }
    printf("\n sum of the ascii value of the enterd word is: %d",sum);
}
