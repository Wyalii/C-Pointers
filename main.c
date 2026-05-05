#include <stdio.h>
int main()
{
    int a = 5;
    int *p;
    p = &a;
    *p = 10; // dereferencing!!!!!
    int b = 20;
    *p = b;
    printf("print of a variable: %d\n", a);
    printf("print of a p variable: %d\n", p);
    printf("print of *p: %d\n", *p);
    printf("print of &a: %d\n", &a);
    printf("printed p+1: %d\n", p + 1);
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("value at P+1 is: %d", *p + 1);
    return 0;
}