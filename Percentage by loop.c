#include<stdio.h>
#include <conio.h>

void main()
{
    
    int arr[100], size, i, sum = 0;
    float per;
    
  
    printf("Enter array size\n");
    scanf("%d",&size);
    
    
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
   
    for(i = 0; i < size; i++)
          sum = sum + arr[i];  
    
  
    printf("Sum of the array = %d\n",sum);
    per=sum/size;
    printf("here is your percentage: %f",per);
    
    
    
} 
    
    

