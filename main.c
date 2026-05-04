#include <stdio.h>
int main()
{
    int a = 5;
    int *p;
    p = &a;
    *p = 10; // dereferencing!!!!!
    printf("print of a variable: %d\n", a);
    printf("print of a p variable: %d\n", p);
    printf("print of *p: %d\n", *p);
    printf("print of &a: %d\n", &a);
    return 0;
}