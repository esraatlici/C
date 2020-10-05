#include<stdio.h>
int main()
{
	char *kelime1="Merhaba Dunya";
	char *kelime2;
	char *temp;
	int baslangic_index=3;
	int kackarakter=8;
	int i,j=0;
	temp=&kelime1[baslangic_index];
	for(temp;temp<&kelime1[kackarakter+baslangic_index-1];temp++)
	{
		*kelime2[j=0]=*temp;
		j++;
	}
	kelime2[j]=NULL;
	printf("%s",*kelime2);
	
	return 0;
}
