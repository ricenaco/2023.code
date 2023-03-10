#include <stdio.h>
int main()
{
    int a=10,b=20;
    int *p1=&a;
    int *p2=&b;

    printf("p1指到的值是 %d\n",*p1);
    printf("p2指到的值是 %d\n",*p2);

    p1=p2;
    printf("p1指到的值是 %d\n",*p1);
    printf("p2指到的值是 %d\n",*p2);
}
