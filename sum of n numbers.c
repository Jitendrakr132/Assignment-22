#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i,n,sum=0;
    printf("Enter the n of number");
    scanf("%d",&n);
    printf("Enter the elements");
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
     sum+=*(p+i);
    }
    printf("sum is %d",sum);
    free(p);
}
