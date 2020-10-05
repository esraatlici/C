#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **matris;
	int satir,kolon,i,k,j,s;
	printf("Matrisin satir sayisi: ");
	scanf("%d",&satir);
	
	printf("Matrisin sutun sayisi: ");
	scanf("%d",&kolon);
	
	matris=(int **)calloc(satir,sizeof(int));
	
	for(i=0;i<satir;i++)
	{
		matris[i]=(int *)calloc(kolon,sizeof(int));
	}
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<kolon;j++)
		{
			printf("Matris elemanini girin -> matris[%d][%d]: ",i,j);
			scanf("%d",&(matris[i][j]));
			
		}
	}
	printf("\n");
	for(i=0;i<satir;i++)
	{
		for(j=0;j<kolon;j++)
		{
			printf("%-4d",matris[i][j]);//%4d= 4 karakterlik yer ayýrýr//basýna - yazýnca sola dayalý yazýyor
		}
		printf("\n");
	}
	
		for(i=0;i<satir;i++)
	{
		free((void*)matris[i]);
	}
	free((void*)matris);
	
	
	return 0;
}
