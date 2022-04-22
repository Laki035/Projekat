/*bez dodatne promenljive koja prima rezultat koji vraca funcija min*/
#include <stdio.h>
#include <stdlib.h>
int minimum(int x,int y,int z)
{
    if((x<=y)&&(x<=z))
        return x;
    else
        if((y<=x)&&(y<=z))
            return y;
        else
            if((z<=x)&&(z<=y))
                return z;
}
int main()
{
    int a,b,c;
    printf("unesite brojeve a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("najmanji broj od unetih brojeva %d %d %d je %d",a,b,c,minimum(a,b,c));
    return 0;
}
