#include<stdio.h>
#include<stdlib.h>
#define n 5    //derslerin sayisi

typedef struct ders   //typedef yaz�nca main de struct.... yazmaya gerek kalmaz
{
	int dersKodu;
	float vizeNotu;
	float finalNotu;
}Ders;

int main()
{
	Ders dersler[n]; //derslerden olu�an n elemanl� dizi
	int i;
	for(i=0;i<n;i++)
	{
		/*printf("%d. Dersin Kodu: ",i+1);
		scanf("%d",&dKod);                                 //bu sekildede yap�labilir
		dersler[i].dersKodu=dKod;*/
		
		printf("%d. Dersin Kodu: ",i+1);
		scanf("%d",&dersler[i].dersKodu);
		
		printf("%d. Dersin Vize Notu: ",i+1);
		scanf("%f",&dersler[i].vizeNotu);
		
		printf("%d. Dersin Final Notu: ",i+1);
		scanf("%f",&dersler[i].finalNotu);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t%.2f\t%.2f\t%.2f\n",dersler[i].dersKodu,
		                                dersler[i].vizeNotu,
										dersler[i].finalNotu,
										(0.4*dersler[i].vizeNotu+0.6*dersler[i].finalNotu)); //.2f---> virgulden sonra 2 basamak al�r
	}
		 
	return 0;
}
