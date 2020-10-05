#include <stdio.h>
#include <stdlib.h>
#define n 1

typedef struct ders
{
    int dersKodu;
    float vizeNotu;
    float finalNotu;
}Ders;

int main()
{
    Ders dersler[n];
    int i;
    int dKod;

    for(i=0;i<n;i++)
    {
        printf("%d. Dersin Kodu:", i+1);
        scanf("%d", &dKod);
        dersler[i].dersKodu = dKod;

        printf("%d. Dersin Vize Notu:", i+1);
        scanf("%f", &dersler[i].vizeNotu);

        printf("%d. Dersin Final Notu:", i+1);
        scanf("%f", &dersler[i].finalNotu);
    }
    printf("\n--------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%.2f\t%.2f\t%.2f\n", dersler[i].dersKodu,
                                        dersler[i].vizeNotu,
                                        dersler[i].finalNotu,
                                        (0.4*dersler[i].vizeNotu
                                         + 0.6*dersler[i].finalNotu));
    }

    return 0;
}
