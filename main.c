#include <stdio.h>
int main()
{
    int a = 5;
    int *p = &a;
    printf("print of a variable: %d\n", a);
    printf("%p\n", (void *)&a);
    printf("print of *p: %d\n", *p);
    return 0;
}