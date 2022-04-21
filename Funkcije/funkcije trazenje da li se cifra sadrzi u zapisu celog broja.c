#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sadrzi(int x, int k)
{
	while(x>0)
	{
		if(abs(x%10)==k)
		{
			return 1;
		}
		else
		{
			x=x/10;
		}
	}
	return 0;
}
int main() 
{
	int n,c;
	printf("unesi broj n\n");
	scanf("%d",&n);
	p:
	printf("unesi jednocifreni broj k\n");
	scanf("%d",&c);
	if(c>=0 && c<10)
	{
		if(sadrzi(n,c)==1)
			printf("broj %d sadrzi u sebi broj %d",n,c);
		else
			printf("broj %d ne sadrzi u sebi broj %d",n,c);
		return 0;	
	}
	else
	{
		printf("pogresio si prijatlju aj opet da uneses\n");
		goto p;
	}
}