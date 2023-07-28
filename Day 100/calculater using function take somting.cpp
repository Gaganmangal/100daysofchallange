#include <stdio.h>
void main()
{
    void add(int, int);
    void sub(int, int);
    void mult(int, int);
    void divi(int, int);
    int x, y;
    printf("enter two number:");
    scanf("%d%d", &x, &y);
    add(x, y);
    sub(x, y);
    divi(x, y);
    mult(x, y);
}
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("sum is %d\n", c);
}
void sub(int a, int b)
{
    int c;
    c = a - b;
    printf("sub is %d\n", c);
}
void mult(int a, int b)
{
    int c;
    c = a * b;
    printf("mult is %d\n", c);
}
void divi(int a, int b)
{
    int c;
    c = a / b;
    printf("divi is %d\n", c);
}
