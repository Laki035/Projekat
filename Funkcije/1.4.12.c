/*odredjivanje broja neparnih cifara u unetom broj n sve dok se ne unese 0 verzija sa beskonacnom petljom i break naredbom*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int neparni(int x)
{
	int brn=0;
	x=abs(x);
	while(x>0)
	{
		if(abs(x%10)%2!=0)
		{
			brn++;
		}
		x=x/10;
	}
	return brn;
}
int main() 
{
	int n,c;
	while(1)
	{
		printf("unesi broj n\n");
		scanf("%d",&n);
		if(n==0)
			break;
		else
			printf("broj %d ima %d neparnih cifara\n",n,neparni(n));	
	}
	return 0;	
}
