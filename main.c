#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    printf("Program to know the largest number \n");
    printf("Please enter numbers = ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);


    if((a>b)&&(a>c)&&(a>d)&&(a>e))
        printf("The %d ",a);

    if((b>a)&&(b>c)&&(b>d)&&(b>e))
        printf("The %d ",b);

        if((c>b)&&(c>a)&&(c>d)&&(c>e))
        printf("The %d ",c);

        if((d>b)&&(d>c)&&(d>a)&&(d>e))
        printf("The % d",d);

        if((e>b)&&(e>c)&&(e>d)&&(e>a))
        printf("The %d ",e);
}
