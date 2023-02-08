#include <stdio.h>

int main()
{
int a;
int b;
int c;

printf("inserisci tre numeri\n");
scanf("%d %d %d", &a, &b, &c);

if (b+a>c && c+b>a && c+a>b)
{
    printf("è un triangolo\n");

if((a==b && a!=c) || (b==c && b!=a) || (a==c && c!=b))

{
    printf("il triangolo è isoscele\n");
}
else if( a==b && b==c)
{
printf("triangolo equilatero\n");
}
else 
{
    printf("triangolo scaleno");
}

}
else
{
printf("non è un triangolo\n");
}
}
