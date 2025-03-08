#include <stdio.h>
#include <math.h>
int main()
{
    int L = 2;
    float pt = (2*L) + (2*((float)1/4 * L)) + ((float)3/2 * L) + (sqrt(8)*2) + sqrt(13) + 2;
    float at = pow(L,2) + (((float)3/2 * L)* L)/2 + (2 * (pow(L,2) / 2)) + ((2*L) * ((float)1/4 * L));
    printf("Perimetro total es: %.2f\n", pt);
    printf("Area total es: %.2f\n", at);
    return 0;
}
