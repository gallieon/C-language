#include<stdio.h>

int main()
{
 
    int n,sum=0,c,value;

    printf("\n\nEnter the number of integers you want to add:  ");
    scanf("%d", &n);

    printf("Enter %d integers\n\n",n);
    for(c = 1; c <= n; c++)
    {
        scanf("%d", &value);
        /* 
            need to initialise sum before using otherwise 
            garbage value will get printed
        */
        sum += value;
    }

    printf("\nnsum of entered numbers  = %d", sum);

    return 0;
}
