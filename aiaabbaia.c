#include <stdio.h>

int main()
{
int a;
int b;
printf("inserisci due valori: \n");
scanf("%d %d", &a , &b);
printf("a: %d\n b: %d\n", a,b);

if (a%b==0)
{
    printf ("a multiplo di b\n");

}
else 
{
    printf ("a non multiplo di b\n");
}





}