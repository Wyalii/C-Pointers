#include <stdio.h>
int main()
{
    // int a = 5;
    // int *p;
    // p = &a;
    // *p = 10; // dereferencing!!!!!
    // int b = 20;
    // *p = b;
    // printf("print of a variable: %d\n", a);
    // printf("print of a p variable: %d\n", p);
    // printf("print of *p: %d\n", *p);
    // printf("print of &a: %d\n", &a);
    // printf("printed p+1: %d\n", p + 1);
    // printf("size of integer is %d bytes\n", sizeof(int));
    // printf("value at P+1 is: %d", *p + 1);

    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is: %d\n", sizeof(int));
    printf("P || ADDRESS = %d || VALUE = %d\n", p, *p);
    printf("P+1 || ADDRESS = %d || VALUE = %d\n", p + 1, *p + 1);
    char *p0;
    p0 = (char *)p;

    printf("size of character is: %d\n", sizeof(char));
    printf("P0 || ADDRESS = %d || VALUE = %d\n", p0, *p0);
    return 0;
}