#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)malloc(sizeof(int));
    scanf("%d",ptr);
    if(ptr==NULL)
    {
        printf("Memory Allocation failed\n");
        return 0;
    }


}
