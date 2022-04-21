#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sve_cifre_jednake(int x)
{
	int c;
	x=abs(x);
	c=x%10;
	while(x>0)
	{
		if((x%10)!=c)
			return 0;	
		x=x/10;
	}
		return 1;

}
int main() 
{
	int x;
	printf("Unesi broj\n");
	scanf("%d",&x);
	if(sve_cifre_jednake(x)==1)
		printf("Sve cifre broja su jednake.\n",x);
	else
		printf("Broj %d nema sve iste cifre.\n",x);
	return 0;	
}