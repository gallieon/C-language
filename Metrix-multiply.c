#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[50][50],i,j,a,b,arr1[50][50],i1,j1,a1,b1;
    //input for first metrix......................................
    printf("enter a number of row:\n");
    scanf("%d",&a);
    printf("enter the number of column:\n");
    scanf("%d",&b);
   
    //loop for first metrix........................................
    for(i=0;i<a;i++)
    {
    for(j=0;j<b;j++)
    {
    printf("enter a [%d][%d]:",i,j);
    scanf("%d",&arr[i][j]);
    }
    }
    printf("\n first matrix according to your data....\n");
    for(i=0;i<a;i++)
    {
    printf("\n");
    for(j=0;j<b;j++)
    {
    printf("%d\t",arr[i][j]);
    // printf("\n");
    }
    }
     //input for second metrix......................................
    printf("\nenter a number of row:\n");
    scanf("%d",&a1);
    printf("enter the number of column:\n");
    scanf("%d",&b1);
    //loop for second metrix........................................
     
    for(i1=0;i1<a1;i1++)
    {
    for(j1=0;j1<b1;j1++)
    {
    printf("enter a [%d][%d]:",i1,j1);
    scanf("%d",&arr1[i1][j1]);
    }
    }
    printf("\n  second matrix according to your data....\n");
    for(i1=0;i1<a1;i1++)
    {
    printf("\n\n");
    for(j1=0;j1<b1;j1++)
    {
    printf("%d\t",arr1[i1][j1]);
    }
    }
}

    
 
