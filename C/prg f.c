#include<stdio.h>
void myswap(int*,int*);
int main()
{
    int a, b;
    a=5;
    b=6;

    printf("\nBefore swapping:");
    printf("a=%d,b=%d",a,b);

    myswap(&a,&b);

    printf("\n\nAfter swapping:");
    printf("a=%d,b=%d",a,b);

    return 0;
}
void myswap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
