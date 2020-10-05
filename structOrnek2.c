#include <stdio.h>
#include <stdlib.h>

struct DogumGunu
{
    int yil;
    int ay;
    int gun;
};

struct DogumGunu dogum_gunu, bugun, fark;

int main()
{
    printf("Dogum gununuzu GG-AA-YYYY giriniz:");
    scanf("%d-%d-%d", &dogum_gunu.gun, &dogum_gunu.ay, &dogum_gunu.yil);

    printf("Bugunun tarihini GG-AA-YYYY giriniz:");
    scanf("%d-%d-%d", &bugun.gun, &bugun.ay, &bugun.yil);

    fark.gun = bugun.gun - dogum_gunu.gun;
    if(fark.gun < 0)
    {
        fark.gun += 30; //fark.gun = fark.gun + 30;
        bugun.ay--;
    }
    fark.ay = bugun.ay - dogum_gunu.ay;
    if(fark.ay < 0)
    {
        fark.ay += 12; //fark.gun = fark.gun + 30;
        bugun.yil--;
    }
    fark.yil = bugun.yil - dogum_gunu.yil;
    printf("\nFark: %d/%d/%d\n", fark.gun, fark.ay, fark.yil);
    return 0;
}





