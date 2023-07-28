#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *p;
    printf("enter number of elements:");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
        scanf("%d", (p + i));
    for (i = 0; i < n; i++)
        printf("%d\n", *(p + i));
    free(p);
    return 0;
}
