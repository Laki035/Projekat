#include<stdio.h>
#include<stdlib.h>
void unos_niza(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
         printf("unesi %d. element niza\n",i+1);
         scanf("%d",&a[i]);
    }
}
void ispis_niza(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
         printf("a[%d]=%d",i,a[i]);
    }
}
void proizvod_clanova_niza_sa_pi(int a[],int n)
{
    int i,p=1;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            p*=a[i]; /*skraceni zapis od p=p*a[i];*/
    }
    printf("proizvod elemenata niza sa parnim indeksom je %d",p);
}
void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    ispis_niza(a,n);
    proizvod_clanova_niza_sa_pi(a,n);
}
