#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
float indeks_min(float b[],int n)
{
    float m;
    int mi,i;
    m=b[0];
    mi=0;
    for(i=1;i<n;i++)
    {
        if(b[i]<m)
        {
            m=b[i];
            mi=i;
        }
    }
    return mi;
}
void najblizi_aritmetickoj(int a[],int n)
{
    int i,s=0;
    float b[n];
    float as;
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    as=1.0*s/n;
    for(i=0;i<n;i++)
    {
        b[i]=fabs(as-a[i]);
    }
    int indeks;
    indeks=indeks_min(b,n);
    printf("\n aritmeticka je %f i element najblizi_aritmetickoj je %d",as,a[indeks]);
}
void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    ispis_niza(a,n);
    najblizi_aritmetickoj(a,n);
}

