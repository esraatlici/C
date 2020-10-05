#include <stdio.h>
void calculation(int *,int *,int *,int *);
int main()
{
	int ss,ls,field,environment;
	printf("Enter two side: \n");
	scanf("%d%d",&ss,&ls);
	calculation(&ss,&ls,&field,&environment);
	printf("Environment: %d\n",environment);
	printf("Field: %d\n",field);
	return 0;
}
void calculation(int *a,int *b,int *f,int *e)
{
	*e=(2*((*a)+(*b))); //env.=2*(ss+ls)
	*f=(*a)*(*b); //field=ss*ls
}
