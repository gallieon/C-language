#include <stdio.h>
#include <conio.h> 
void main()
{
int m,n,p,q,c,d,k,sum=0;
int f_m[10][10],s_m[10][10],multiply[10][10];               
 
printf("Enter the number of rows and columns of first matrix\n");

printf("enter the number of row of first metrix:\n");
scanf("%d",&m);
printf("enter the number of column of first metrix:\n");
scanf("%d",&n);

printf("Enter the elements of first matrix....\n");
 
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&f_m[c][d]);
 
printf("Enter the number of rows and columns of second matrix\n");
printf("enter the number of row of second metrix:\n");
scanf("%d",&p);
printf("enter the number of column of second metrix:\n");
scanf("%d",&q);
 
 
if(n!=p)
printf("Matrices with entered orders can't be multiplied with each other.\n");
else
{
printf("Enter the elements of second matrix\n");

for(c=0;c<p;c++)
for(d=0;d<q;d++)
scanf("%d",&s_m[c][d]);
 
for(c=0;c<m;c++)
{
for(d=0;d<q;d++)
{
for(k=0;k<p;k++)
{
sum=sum+f_m[c][k]*s_m[k][d];
}
 
multiply[c][d]=sum;
sum=0;
}
}
 
printf("Product of entered data of matrices:-\n");
 
for(c=0;c<m;c++)
{
for(d=0;d<q;d++)
printf("%d\t",multiply[c][d]);
printf("\n");
        
}
}
}



