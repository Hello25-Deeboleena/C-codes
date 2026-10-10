#include<stdio.h>
int main()
{
    int i;
    int *p;
    int a[5]={23,10,67,89,45};
    p=&a;
    for(i=0;i<5;i++)
    {
        printf("%d\t",*p);
        p=p+1;


    }
    return 0;

}
