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
float aritmeticka_pi(int a[],int n)
{
    int i,bp=0,s=0;
    float asp;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            bp++;
            s+=a[i];
        }
            
    }
    asp=1.0*s/bp;
    return asp;
}
void main()
{
    int n;
    printf("unesi koliko ima elemenata niza\n");
    scanf("%d",&n);
    int a[n];
    unos_niza(a,n);
    ispis_niza(a,n);
    printf("/naritmeticka sredina elemenata sa parnim indeksom je %.3f",aritmeticka_pi(a,n));
}

