/*ispitivanje da li se broj sastoji iz parno neparnih cifara cik cak sve do unosa broja nula varijacija na temu radjeno sa beskonacnom petljom*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int par_nepar(int x)
{
	int indikator=0,pc;
	x=abs(x);
    pc=x%10;
    x=x/10;
	while(x>0)
	{
		if(((x%10)%2)==(pc%2))
		{
			indikator=1;
            break;
		}
        pc=x%10;
		x=x/10;
	}
	return indikator;
}
void main() 
{
	int n,c;
	while(1)
	{
		printf("unesi broj n\n");
		scanf("%d",&n);
		if(n==0)
			break;
		else
            if(par_nepar(n)==0)
                printf("broj %d, se sastoji iz naizmenicno parno neparnih cifara\n",n);
            else
                printf("broj %d, se ne sastoji iz naizmenicno parno neparnih cifara\n",n);	
	}
}
