/*
Verinin haf�zada s�ral� tutulmas� i�in geli�tirilen s�ralama algoritmalar�ndan (sorting algorithms) bir tanesidir. 
Basit�e ard���k duran iki haf�za blo�unun birbirine nispetle s�ralanmas� ve bu i�lemin s�rekli tekrarlanmas� sayesinde s�ralar. 
Ard���k iki haf�za blo�una bakmas�ndan dolay� baloncuk ismini alm��t�r. 
��nk� bu bakma i�lemi bir baloncu�un (buble) hareket etmesi gibi say�lar�n �zerinde hareket etmektedir.
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

