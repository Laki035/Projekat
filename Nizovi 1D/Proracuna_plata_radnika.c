#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("unesi koliko ima radnika\n");
	scanf("%d",&n);
	float plata_radnika[n],broj_sati[n],cena_radnog_sata;
	cena_radnog_sata=1000; 
	int i;
	for(i=0;i<n;i++)
   	{
       printf("unesi broj_sati za %d. radnika\n",i+1);
       scanf("%f",&broj_sati[i]);
       plata_radnika[i]=broj_sati[i]*cena_radnog_sata;
   	}
	for(i=0;i<n;i++)
   	{
       printf("plata %d. radnika je %0.2f dinara",i+1,plata_radnika[i]);
       printf("\n");
   	}
}
