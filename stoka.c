#include <stdio.h>

int main()
{ 
    int x = 10;
    int y = 11;

    printf("x era: %d\n", x);
    printf("y era: %d\n", y);

    printf("inseisci due numeri\n");
    scanf("%d %d", &x, &y);

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    return (0);
}