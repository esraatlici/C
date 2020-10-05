#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *dizi;
	int i,n;
	//dizi=(int *)malloc(sizeof(int)*1);
	//printf("Degisken degerini gir: ");
	//scanf("%d",dizi);
	//printf("Dizi degisken adresi :%p, deger: %d",dizi,*dizi);
	
    //printf("\n\n");
	//printf("Dizi boyutu gir: ");
	//scanf("%d",&n);
	//dizi=(int *)malloc(n*sizeof(int));
	//printf("Malloc adres: %p, dizi boyutu: %d",dizi,_msize(dizi));//_msize()dizinin boyutunu döndürür
	//printf("\n\n");
	//for(i=0;i<n;i++)
	//{
	//	printf("%d.eleman degerini gir: ",i+1);
	//	scanf("%d",dizi+i); //i=i*sizeof(int)	
	//}
	//free(dizi);
	//dizi=NULL;
	
	//printf("\n");
	//printf("Free adres: %p,dizi boyut: %d",dizi,_msize(dizi));
	
	printf("Dizi boyutunu girin: ");
	scanf("%d",&n);
	dizi=(int *)calloc(n,sizeof(int));  //verdiði bellek boþ geliyor, mallocta dolu
	printf("Calloc adres: %p, dizi boyut: %d\n",dizi,_msize(dizi));
	for(i=0;i<n;i++)
	{
		printf("%d .eleman degeri: %d\n",i+1,dizi[i]); //*(dizi+i)
	}
		dizi=(int *)realloc(dizi,n*sizeof(int)*2000);
		printf("Calloc adres: %p, dizi boyut: %d\n",dizi,_msize(dizi));
		
	dizi=(int *)realloc(dizi,0);
	printf("Realloc adres: %p, dizi boyut: %d\n",dizi,_msize(dizi));
	
	return 0;
}
