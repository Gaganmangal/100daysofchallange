// Takes Somthing Return Somthing.
#include <stdio.h>
void main()
{
    int add(int, int);
    int x, y, s;
    printf("enter two number:");
    scanf("%d%d", &x, &y);
    s = add(x, y);
    printf("sum is %d", s);
}
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
