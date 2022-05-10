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
int prebroji_parne_elemente(int a[],int n)
{
    int i,b=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            b++;
    }
    return b;
}
int prebroji_neparne_elemente(int a[],int n)
{
    int i,b=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
            b++;
    }
    return b;
}
int prebroji_nula_elemente(int a[],int n)
{
    int i,b=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            b++;
    }
    return b;
}
void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    ispis_niza(a,n);
    printf("\nbroj parnih=%d\nbroj neparnih=%d\nbroj nula=%d\n",prebroji_parne_elemente(a,n),prebroji_neparne_elemente(a,n),prebroji_nula_elemente(a,n));
}

