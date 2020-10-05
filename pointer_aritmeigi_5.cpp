#include<stdio.h>
int *adres_bul(int*,int,int);
int main()
{
	int dizi[3][2]={{11,34},{1,22},{37,35}};
	int *gelen_adres=adres_bul(dizi,3,2);
	printf("Adres: %p deger %d",gelen_adres,*gelen_adres);
	return 0;
}
int *adres_bul(int *baslangic,int satir,int sutun)
{
	int *adres=baslangic,i;
	for( i=1;i<satir*sutun;i++)
	{
		if(*adres<*(baslangic+1))
		{
			adres=baslangic+1;
		}
	}
	return adres;
}
