#include <stdio.h>
#include <stdlib.h>
struct address
{
    int hno;
    char sname[20];
    char city[20];
} add;
struct employes
{
    int eide;
    char name[20];
    struct address add;
} e;
int main()
{
    e;
    printf("Enter hno,sname and city:");
    scanf("%d", &e.add.hno);
    fflush(stdin);
    gets(e.add.sname);
    fflush(stdin);
    gets(e.add.city);
    printf("Enter eid and name:");
    scanf("%d", &e.eide);
    fflush(stdin);
    gets(e.name);
    printf("\nEide=%d", e.eide);
    printf("\nName=%s", e.name);
    printf("\naddress=%d %s %s", e.add.hno, e.add.sname, e.add.city);
    return 0;
}
