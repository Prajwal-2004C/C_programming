#include<stdio.h>

int main()
{
    int a = 10;
    int b = 12;
    int c = 0;
    int *ptr1 = &a;
    int *ptr2 = &b;

    c = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = c;

    printf("a: %d \nb: %d\n",a,b);
    return 0;
}