#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[1000],n,i,j;
    
    printf("enter a array size :\n");
    scanf("%d",&n);
    
    printf("enter %d value\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        printf(" %d",arr[j]);
    }
    
}



