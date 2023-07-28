#include <stdio.h>
#include <stdlib.h>
struct employes
{
    int eid;
    char name[30];
};
int main()
{
    struct employes e;
    printf("enter eid:");
    scanf("%d", &e.eid);
    fflush(stdin);
    printf("enter name:");
    gets(e.name);
    printf("eid=%d\n", e.eid);
    printf("name=%s", e.name);
    return 0;
}
