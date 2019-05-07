#include<stdio.h>
int main()
{
int array[10];int n;
scanf("%d",&n);
printf("enter the elements\n");
for(int i=0;i<n;i++)
{
 scanf("%d",&array[i]);
}
printf("the elements are arranged in order\n");
for(int j=n-1;j>=0;j--)
{
 printf("array[%d]=%d\n",j,array[j]);
}
}
