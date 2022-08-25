#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[20];
    int *p,i,sum=0;
    p=a;

    printf("Enter the element:");
    p=(int *)malloc(sizeof(int));
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<5;i++)
    {
        sum+=*(p+i);
    }
    printf("%d",sum);
}
