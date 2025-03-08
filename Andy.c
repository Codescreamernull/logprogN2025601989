#include <stdio.h>
#include <math.h>
int main()
{
    int L = 7;
    int Pi = 3.1416;
    float C1 = pow(7,2);
    float C2 = (float)1/5*7*((float)3/5*7);
    float C3 = (float)1/5*7*((float)1/5*7);
    float pt = ((float)23/5*7) + (3.1416*7) / 2;
    float at = C1 + (2*C2) + (2*C3) + (3.1416*(pow((float)7/2,2)) / 2);
    printf("Perimetro total es: %.4f\n", pt);
    printf("Area total es: %.4f\n", at);
    return 0;
}
