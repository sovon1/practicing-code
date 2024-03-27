//even odd using function
#include<stdio.h>
int even_odd(int);
int main()
{
    int n;

    printf("we are going to calculate whether a number is even or odd");
    printf("\n Enter number : ");
    scanf("%d",&n);
    int flag = even_odd(n);
    if(flag==0)
    printf("it's a even number");
    else
    printf("it's a odd number");
    return 0;
}
int even_odd(int n)
{
    if(n%2==0)
    {
        return 0;
    }
    else
    {
       return 1;
    }
    
    
}






#include<stdio.h>

void display(int x[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }
}
int main()
{
    int num[]={10,20,30,40,50};
    display(num);
    
    
    return 0;
}



//finding max element

#include<stdio.h>

int maxumum(int x[])
{
    int i;
    int mx = x[0];
    for(i=0;i<5;i++)
    {
        if (x[i]>mx)
        mx = x[i];
  
    }
    return mx;
}
int main()
{
    int mx;
    int num[]={10,20,30,40,50};
    maxumum(num);
    
    printf("%d",mx);
    return 0;
}


