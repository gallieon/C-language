#include <stdio.h>      //factorial by normal method....
#include <conio.h>
int main()
{
    int fact=1,i,number;
    printf("enter a number\n");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d",number,fact);
    return 0;
    
}


