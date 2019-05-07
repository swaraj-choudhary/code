#include<stdio.h>
int main()
{
 int array[10];
 int i,j=0,n,item;
 scanf("%d",&n);
printf("original elements of the array");

for(i=0;i<n;i++)
{
 scanf("%d",&array[i]);
}
printf("enter the elemnents to be searched");
scanf("%d",&item);
while(j<n)
{
	if(array[j]==item)
	{
	 break;
	}
	j=j+1;
}
printf("the element is %d position is %d",j,item);
}


