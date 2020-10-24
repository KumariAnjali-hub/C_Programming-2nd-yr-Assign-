#include<stdio.h>
int main()
{
int array[100],n,c,d,swap;
printf("enter no of element\n");
scanf("%d",&n);
printf("enter %d integer\n",n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);
for(c=0;c<n-1;c++)
{
for(d=0;d=n-c-1;c++)
{
if(array[d]>array[d+1])
{
swap=array[d];
array[d+1]=swap;
}
}
}
printf("sorted list in accending order:\n");
for(c=0;c<n;c++)
printf("%d\n",array[c]);
return 0;
}
