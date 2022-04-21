#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int  sve_parne_cifre(x)
{
	int bp=0,bc=0;
	x=abs(x);
	while(x>0)
	{
		if((x%10)%2==0)
			bp++;
		bc++;	
		x=x/10;
	}	
	if(bc==bp)
		return 1;
	else
		 return 0;
}
int main() 
{
	int x;
	printf("Unesi broj\n");
	scanf("%d",&x);
	if(sve_parne_cifre(x)==1)
		printf("Sve cifre broja %d su parne.\n",x);
	else
		printf("Broj %d nema sve parne cifre.\n",x);
	return 0;	
}