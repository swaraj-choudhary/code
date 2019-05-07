#include<stdio.h>
int main()
{
int array[10];
int n;
scanf("%d",&n);
printf("enter the elements\n");
for(int i=0;i<n;i++)
{
 scanf("%d",&array[i]);
}
int max=array[0];
for(int i=0;i<n;i++)
{
if(array[i]>max)
{
 max=array[i];
}
}
printf("the highest element is %d",max);
}
