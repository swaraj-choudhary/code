#include<stdio.h>
int main()
{
 int array[10],sum=0,n;float f=0.0;
 printf("enter the length of array\n");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
 	scanf("%d",&array[i]);
 }
 for(int i=0;i<n;i++)
 {
 sum=sum+array[i];
  f=(sum/2); 
 }
 printf("\nthe sum of the array elements is %f:\n",f);
}

