/*izbacivanje cifre sa unete pozicije u unetom celom broju n*/
#include <stdio.h>
#include <stdlib.h>
int broj_cifara_broja(int n)
{
    int brc=0;
    while(n>0)
    {
        n=n/10;
        brc++;
    }
    return brc;
}
int stepen(int x, int n)
{
    int i,s=1;
    for(i=0;i<n;i++)
    {
        s=s*x;
    }
    return s;
}
int ukloni(int n, int p) 
{
    int z, levi_deo_broja, desni_deo_broja;
    if(n<0)
        z=-1;
    else
        z=1;
    n = abs(n);  
    levi_deo_broja=n/stepen(10,p);
    levi_deo_broja=levi_deo_broja*stepen(10,p-1);
    desni_deo_broja=n%stepen(10,p-1);
    n=z*(levi_deo_broja+desni_deo_broja);
return n;
}
void main() 
{
  int n=1,p;
  p:
  printf("Unesite poziciju\n: ");
  scanf("%d", &p);
  if (p <= 0) 
  {
    printf("Neispravan unos pozicija mora biti veca od 0\n");
    goto p;
  }
    while (1<2) 
    {
        printf("Unesite broj n: ");
        scanf("%d", &n);
        if(n==0)
            break;
        else
            if(p>broj_cifara_broja(n))
                printf("broj n nema cifru na toj poziciji\n");
            else
                printf("Broj pre izbacivanja cifre %d\n broj posle izbacivanja cifre: %d\n",n,ukloni(n, p));
    }
}
