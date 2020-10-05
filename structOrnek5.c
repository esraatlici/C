#include <stdio.h>
#include <stdlib.h>

union foo
{
    int a;
    char b;
};

int main()
{
    union foo x;

    x.a = 16;
    printf("x.a = %d\n", x.a);
    printf("x.b = %c\n", x.b);

    x.b = 'c';
    printf("x.a = %d\n", x.a);
    printf("x.b = %c\n", x.b);

    return 0;
}
