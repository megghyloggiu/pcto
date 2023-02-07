#include <stdio.h>

int main()
{
    float celsius;
    float F;
    float k;

    printf("inserisic temperatura in celsius\n");
    scanf("%f", &celsius);
    if (celsius<-273.15)
    {
        printf("errore\n");
    }
    else 
    {
        F = 9/5 * celsius + 32;
        k= celsius + 273.15;
        printf("F: %f\n", F);
        printf("k: %f\n", k);
    }


}