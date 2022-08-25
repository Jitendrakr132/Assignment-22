#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[20];
    int *p,i,max=0;
    p=a;

    printf("Enter the element:");
    p=(int *)malloc(sizeof(int));
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    max=*(p+0);
    for(i=0;i<5;i++)
    {
        if(max<*(p+i))
            max=*(p+i);

    }
    printf("largest number =%d",max);
}

