//traversing the array first
#include<stdio.h>
int main()
{
 int i,n, array[50];
 printf("Enter size : ");
 scanf("%d",&n);
 printf("Plese enter array elements  : \n ");
 for (i=0;i<n;i++)
 {
  scanf("%d",&array[i]);
 
 }
 
 
 int pos,num;
 printf("at which position do you want to insert?: ");
scanf("%d",&pos);
//manualy checking bound
if (pos>n+1//you can also enter at nth postion || pos<=0)
//there might be a bug for if (pos >= n || pos < 0)
//i will deal with it later 

{
    printf("This area is out of bound , please enter valid range ");
}
else 
{
printf("Enter num:");
scanf("%d",&num);
for(i=n-1;i>=pos-1;i--)
{
array[i+1] = array[i];
}
array[pos-1]=num;
n++;
 // also you could use 
 // for (int i = n; i > pos; i--) {
 //        array[i] = array[i - 1];
 //    }
    // array[pos] = num;
    // n++;

for(i=0;i<n;i++)
{
 printf("%d ",array[i]);
}
}
}
