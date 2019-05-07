#include<stdio.h>
int main()
{
    int array[10],n,j,temp;
    scanf("%d",&n);
    printf("enter the elemements of the array\n");
    for(int i=0;i<n;i++)
    {
     scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++)
    {
     for(int j=i+1;j<n;j++)
     {
         if(array[j+1]>array[j]) 
         {
             temp=array[j];
             array[j+1]=array[j];
             array[j]=temp;
         }
    }
}
    printf("the elements arranged after sorting");
    for(int i=0;i<n;i++)
    {
     printf("array[%d]=%d\n",i,array[i]);
    }
}
