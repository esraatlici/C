#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *kelime1="Merhaba Dunya";
	char *kelime2;
	char *temp;
	
	int baslangic_index=3;
	int kackarakter=8;
	int i,j=0;
	temp=&kelime1[baslangic_index];
	for(temp;temp<&kelime1[baslangic_index+kackarakter-1];temp++)
	{
		kelime2[j]=*temp;
		j++;
	}
	kelime2[j]=NULL;
	printf("kelime2: %s",kelime2);
	return 0;
}
