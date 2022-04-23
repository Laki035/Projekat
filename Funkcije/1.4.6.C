#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float zbir_reciprocnih(int x)
{
	float s=0;
	while(x>0)
	{
		s=s+1.0/x;
		x--;
	}
	return s;
}
void main() 
{
	int n;
	printf("unesi ceo broj n\n");
	scanf("%d",&n);
	if(n<=0)
		printf("pogresan unos\n");
	else
		printf("zbir reciprocnih %.2f\n",zbir_reciprocnih(n));
}
