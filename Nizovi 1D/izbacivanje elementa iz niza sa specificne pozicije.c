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
         printf("a[%d]=%d\t",i,a[i]);
    }
}
void sortiraj_rastuce(int n, int a[n])
{
     int  i,j,t;
     for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)   
        {
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
}
void izbrisi_element_na_zeljenoj_poziciji(int n,int a[])
{
    int i,j,pozicija;
   // sortiraj_rastuce(n,a);
   printf("unesi index elementa koji zelis da izbacis iz niza\n");
   scanf("%d",&pozicija);
   for(i=pozicija;i<n;i++)
       a[i]=a[i+1];
}
void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    ispis_niza(a,n);
    izbrisi_element_na_zeljenoj_poziciji(n,a);
    ispis_niza(a,n-1);
}
