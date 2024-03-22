//traversing the array first
#include<stdio.h>
int main()
{
 int i,n, array[50];
 printf("Enter size : ");
 scanf("%d",&n);
 for (i=0;i<n;i++)
 {
  scanf("%d",&array[i]);
 
 }
 
 
 int pos,num;
 printf("at which position do you want to insert?: ");
scanf("%d",&pos);
printf("Enter num:");
scanf("%d",&num);
for(i=n-1;i>=pos-1;i--)
{
array[i+1] = array[i];
}
array[pos-1]=num;
n++;

for(i=0;i<n;i++)
{
 printf("%d ",array[i]);
}
}