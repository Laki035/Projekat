/*ispitivanje da li su cifre unetog broja u rastucem ili opadajucem poretku*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int neopadajuce(int x)
{
	int indikator=0,pc;
	x=abs(x);
    pc=x%10;
    x=x/10;
	while(x>0)
	{
		if((x%10)>pc)
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
	printf("unesi ceo broj n\n");
	scanf("%d",&n);
    if(neopadajuce(n)==0)
        printf("cifre broja %d, su u rastucem-neopadajucem poretku\n",n);
    else 
		printf("cifre broja %d, nisu u rastucem-neopadajucem poretku\n",n);	
}
