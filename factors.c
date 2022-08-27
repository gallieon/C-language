#include<stdio.h>

int main()
{
   
    int  num, i;
    printf("Enter the number to find the factors of :  ");
    scanf("%d",&num);
    printf("\n\n\nFactors of %d are \n\n", num);

    for(i = 1; i <= num/2; i++)
    {
        if(num%i == 0)
            printf("\t%d\n", i);
    }

    
    return 0;
}
