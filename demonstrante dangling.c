
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *str;
    printf("Enter the string");
    str=(char*)malloc(sizeof(char));
    gets(str);
    printf(" befor free %s",str);
    free(str);
    printf("\n after free %s",str);
    return 0;

}

