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
int suma_parnih_clanova_niza(int a[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            s+=a[i]; /*skraceni zapis od s=s+a[i];*/
    }
    return s;
}
void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    ispis_niza(a,n);
    printf("\n suma parnih elemanta niza je %d",suma_parnih_clanova_niza(a,n));
}
