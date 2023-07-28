#include <stdio.h>
#include <stdlib.h>
struct employes
{
    int eid;
    char name[30];
} emp;
int main()
{
    emp;
    printf("enter eid:");
    scanf("%d", &emp.eid);
    fflush(stdin);
    printf("enter name:");
    gets(emp.name);
    printf("eid=%d\n", emp.eid);
    printf("name=%s", emp.name);
    return 0;
}
