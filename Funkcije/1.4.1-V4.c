/*Za sve situacije trazenje minimumu i za slucaj  ako hocete da unosite i iste brojeve ovo resenje se moze koristiti za sve situacije*/
#include <stdio.h>
#include <stdlib.h>
void minimum()
{
    int x,y,z,min;
    printf("unesite brojeve x,y,z\n");
    scanf("%d%d%d",&x,&y,&z);
    if((x<=y)&&(x<=z))
        min=x;
    else
        if((y<=x)&&(y<=z))
            min=y;
        else
            if((z<=x)&&(z<=y))
                min=z;
    printf("najmanji broj od unetih brojeva %d %d %d je %d",x,y,z,min);
}
void main()
{
    minimum();
}
