#include <stdio.h>
#include <stdlib.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("Enter two number:");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}
void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
    printf("x=%d y=%d\n", *x, *y);
}
