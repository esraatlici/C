#include <stdio.h>
#include <stdlib.h>

struct name
{
    int model;
    float kilometre;
    char marka[30];
};

int main()
{
    struct name *ptr;
    int n,i;

    printf("Kac araba kaydedilecek:");
    scanf("%d", &n);

    ptr = (struct name*)malloc(n*sizeof(struct name));

    for(i=0;i<n;i++)
    {
        printf("Arada bosluk olacak sekilde marka, model ve km degerlerini girin:");
        scanf("%s %d %f", (ptr+i)->marka, &(ptr+i)->model, &(ptr+i)->kilometre);
    }

    printf("\n---------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%-12s %-4d %-6.2f\n", (ptr+i)->marka, (ptr+i)->model, (ptr+i)->kilometre);
    }

    return 0;
}
