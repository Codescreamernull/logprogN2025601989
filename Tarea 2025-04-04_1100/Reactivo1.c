#include <stdio.h>

int main()
{
    float peso;
    float estatura;

    printf("¿Cuanto pesas (KG)?");
    scanf("%f",&peso);
    printf("Cuanto mides (m)?");
    scanf("%f",&estatura);
    float IMC = peso/(estatura*estatura);

    if(IMC>0&&IMC<=18.4){
        printf("Bajo peso:%.2f",IMC);}
        else if(IMC>=18.5&&IMC<=24.9){
            printf("Peso normal:%.2f",IMC);}
            else if(IMC>=25.0&&IMC<=29.9){
            printf("Sobrepeso:%.2f",IMC);}
            else if(IMC>=30.0&&IMC<=34.9){
            printf("Obesidad clase 1:%.2f",IMC);}
            else if(IMC>=35.0&&IMC<=39.9){
            printf("Obesidad clase 2:%.2f",IMC);}
            else if(IMC>=40.00){
            printf("Obesidad clase 3:%.2f",IMC);}

      return 0;

}
