#include<stdio.h>

void Swap(int *ptr1,  int *ptr2)
{
    int c = 0;
    c = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = c;
}

int main()
{
    int a = 10;
    int b = 12;
    
    Swap(&a,&b);
    printf("a: %d \nb: %d\n",a,b);

    return 0;
}