#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int suma_i_broj_cifara(int x, int *s,int *b)
{
	while(x>0)
	{
		*s=*s+x%10;
		*b=*b+1;
		x=x/10;
	}
}
int main() 
{
	int x1,x2,sc1=0,sc2=0,bc1=0,bc2=0;
	printf("Unesi 1. broj\n");
	scanf("%d",&x1);	
	printf("Unesi 2. broj\n");
	scanf("%d",&x2);
	suma_i_broj_cifara(x1,&sc1,&bc1);
	suma_i_broj_cifara(x2,&sc2,&bc2);
	if((sc1==sc2)&&(bc1==bc2))
		printf("%d %d moze.\n",x1,x2);
	else
		printf("%d %d ne moze.\n",x1,x2);
	return 0;	
}