#include<stdio.h>
int main()
{
    char *name="DEBOLEENA";
    printf("The name is - ");
    while(*name!='\0')
    {
        printf("%c",*name);
        name++;

    }
    return 0;
}
