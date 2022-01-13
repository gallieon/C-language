#include <stdio.h>
#include <conio.h>
void main()
{
    int i=0,j=0;
    int a[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("array[%d][%d]=%d\n",i,j,a[i][j]);
        }
        
    }
    
}



