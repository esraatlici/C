#include<stdio.h>
int hesapla1(int x,int y)
{
	return (x*y);
}
int hesapla2(int t,int z)
{
	return (t*z);
}
int main()
{
	int say1,say2;
    for(int i=0;i<3;i++)
    {
     	printf("Iki sayi gir: ");
    	scanf("%d%d",&say1,&say2);
    	int (*hesaplaptr)(int,int);
    	hesaplaptr=&hesapla1;
	    int c=hesaplaptr(say1,say2);
     	int d=hesapla2(say1,say2);
     	printf("sayi1: %p\n",&say1);
     	printf("sayi2: %p\n",&say2);
    	printf("c: %p\n",&c);
    	printf("d: %p\n",&d);
      	printf("c: %d\n",c);
	    printf("d: %d\n",d);
	}
	return 0;
}
