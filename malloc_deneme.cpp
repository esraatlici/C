#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,*g;
	//p=(int *)malloc(100*sizeof(int));
	//g=return int* malloc(100*sizeof(int));
	if( p==NULL) printf("yer ayrilamadi");
	g=(int *)malloc(100*sizeof(int));
	printf("%d       ",g[0]);
	//while(*g)g++;
    //g--;  
    printf("%d ",sizeof(int));
    printf("%d  ",g[50]);
	//printf("%d ",p);
	printf("%d ",g[100]);
  	//printf("%d ",p[100]);
	//printf("%d ",*(p+101));
	free(g);
	return 0;
}
