/*
Verinin hafýzada sýralý tutulmasý için geliþtirilen sýralama algoritmalarýndan (sorting algorithms) bir tanesidir. 
Basitçe ardýþýk duran iki hafýza bloðunun birbirine nispetle sýralanmasý ve bu iþlemin sürekli tekrarlanmasý sayesinde sýralar. 
Ardýþýk iki hafýza bloðuna bakmasýndan dolayý baloncuk ismini almýþtýr. 
Çünkü bu bakma iþlemi bir baloncuðun (buble) hareket etmesi gibi sayýlarýn üzerinde hareket etmektedir.
*/



#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void sirala(int dizi[],int n) {
	int temp,i,j;
	for(i=0;i<n-1;i++){
		for(j=1;j<n;j++){
			if(dizi[j]<dizi[j-1]){
				temp=dizi[j-1];
				dizi[j-1]=dizi[j];
				dizi[j]=temp;
				dizi_yazdir(dizi,n);
			}
		}
	}
	
	dizi_yazdir(dizi,n);
}

void dizi_yazdir(int dizi[],int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%d ",dizi[i]);
	}
	printf("\n");
}


int main() {
	int n = 8;
	int dizi[8]= {4,1,6,2,7,0,5,3};
	sirala(dizi,n);

	return 0;
}

