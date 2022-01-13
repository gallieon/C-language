#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[20][20],i,j,a,b;
    printf("enter the number of row:");
    scanf("%d",&a);
    printf("enter the number of column:");
    scanf("%d",&b);
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("enter a [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n printing the elements....\n");
    for(i=0;i<a;i++){
        printf("\n\n");
        for(j=0;j<b;j++){
            printf("%d\t",arr[i][j]);
        }
    }
}


