#include <stdio.h>

int main ()
{
    int x,y;
    x = 2;
    y = 4;
    float z = 1/(float)x+(x+y)/3+2*((float)x/y);
    printf("El valor de Z es: %f", z);
    return 0;
}
