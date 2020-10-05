#include<stdio.h>
void alan(int *uk,int *kk,int *alani)
{
	int a=(*kk)*(*uk);
	*alani=a;
}
void cevre(int *uk,int *kk,int *cevresi)
{
	int a=2*(*uk+*kk);
	*cevresi=a;
}
int main()
{
	int uk,kk,alani,cevresi;
	printf("Uzun ve kisa kenari giriniz:\n");
	scanf("%d%d",&uk,&kk);
	alan(&uk,&kk,&alani);
	cevre(&uk,&kk,&cevresi);
    printf("Alan: %d\n",alani);
    printf("Cevre: %d\n",cevresi);
    return 0;
}
