#include<stdio.h>
void alan_hsp(int *uk,int *kk,int *alan)
{
	int a=(*uk)*(*kk);
	*alan=a;
}
void cevre_hsp(int *uk,int *kk,int *cevre)
{
	int a=2*(*uk+*kk);
	*cevre=a;
}

int main()
{
	int uk,kk,alan,cevre;
	printf("Uzun ve kisa kenar uzunlugunu giriniz:\n");
	scanf("%d%d",&uk,&kk);
	alan_hsp(&uk,&kk,&alan);
	cevre_hsp(&uk,&kk,&cevre);
	printf("Alan: %d\n",alan);
	printf("Cevre: %d\n",cevre);
	return 0;
}
