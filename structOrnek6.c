#include <stdio.h>
#include <stdlib.h>

struct name
{
    int a;
    float b;
};

int main()
{
    struct name p, *ptr;
    ptr = &p;

    printf("Enter integer value: ");
    scanf("%d", &(*ptr).a);

    printf("Enter float value: ");
    scanf("%f", &ptr->b);

    printf("\n------------\n");

    printf("%d\t%.2f", (*ptr).a, ptr->b);

    return 0;
}
