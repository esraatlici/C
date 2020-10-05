#include<stdio.h>
#include<stdlib.h>

struct den{
	int model;
	float kilometre;
	char marka[20];
};

int main(){
	struct den *ptr;
	int i,n;
	printf("Kac araba kaydedilecek: ");
	scanf("%d",&n);
	ptr=(struct den*)malloc(n*sizeof(struct den));
	for(i=0;i<n;i++){
		printf("marka-model-kilomtre gir: ");
		scanf("%s-%d-%f",&(ptr+i)->marka,&(ptr+i)->model,&(ptr+i)->kilometre);
	}
	
	for(i=0;i<n;i++){
		printf("%s\t-%d\t-%f\n\n",(ptr+i)->marka,(ptr+i)->model,(ptr+i)->kilometre);
	}
	return 0;
}
