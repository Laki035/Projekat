#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i;
    printf("unesi koliko elemnata niza ima\n");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
       printf("unesi %d. element niza\n",i+1);
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
            printf("a [%d] = %d",i,a[i]);
            printf("\n");
    }
}
