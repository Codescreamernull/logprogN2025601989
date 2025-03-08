#include <stdio.h>
#include <math.h>
int main()
{
    int L =7;
    float at= 2*3*L*L + (2*3*L*L)/2.0 + M_PI*pow(3*L/2.0,2)/2;
    float pt= (M_PI*3*L/2) + 2*sqrt(pow(L,2)+pow(3*L,2)) + 7*L;
    printf("Perimetro total es: %.2f\n", pt);
    printf("Area total es: %.2f\n", at);
    return 0;
}
