#include<stdio.h>
int main()
{
 int array[10];
 int i,j=0,n,item;
 scanf("%d",&n);
 printf("enter the %d elements of the array \n",n);
for(i=0;i<n;i++)
{
 scanf("%d",&array[i]);
}
printf("enter the element to be searched");
scanf("%d",&item);
while(j<n)
{
if(array[j]==item)
{
	printf("the element in the %d position is %d ",j+1,item);
	break;
 j++;
}
}
printf("element is not present in the array");
}






