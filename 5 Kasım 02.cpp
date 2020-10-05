#include<stdio.h>
#include <stdlib.h>

struct DogumGunu
{
	int yil;
	int ay;
	int gun;
}dogum_gunu,bugun,fark; //struct tipinden global degiskenler

// struct DogumGunu dogum_gunu,bugun,fark;  yukarýdaki gibi olur bu sekilde de tanýmlanabililr


int main()
{
	printf("Dogum gununuzu GG-AA-YYYY giriniz: ");
	scanf("%d-%d-%d", &dogum_gunu.gun, &dogum_gunu.ay, &dogum_gunu.yil);
	
	printf("Bugunun tarihini GG-AA-YYYY giriniz: ");
	scanf("%d-%d-%d", &bugun.gun, &bugun.ay, &bugun.yil);
	
	fark.gun=bugun.gun - dogum_gunu.gun;
	if(fark.gun<0)
	{
		fark.gun+=30;
		bugun.ay--;
	}
	
	fark.ay= bugun.ay-dogum_gunu.ay;
		if(fark.ay<0)
	{
		fark.ay+=12;
		bugun.yil--;
	}
	
	fark.yil=bugun.yil-dogum_gunu.yil;
	
	printf("\nFark: %d gun-%d ay-%d yil\n",fark.gun,fark.ay,fark.yil);
	
	return 0;
}
