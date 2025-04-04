#include <stdio.h>

int main()
{
    int ingredientes;
    int opcion;

    printf("¿Quieres una pizza vegetariana? 1 si, 2 no\n");
    scanf("%d",&opcion);
    if(opcion == 1)
        printf("1 Pimiento\n2.Tofu\nEscoge tu ingediente:");
    else
        printf("1 Pepperoni\n2.Jamon\n3.Salmon\nEscoge tu ingrediente:");

    scanf("%d",&ingredientes);
    if(opcion == 1 && ingredientes == 1)
        printf("Pizza vegetariana\nIngredientes: Pimiento, Mozarella y Tomate");

    else if(opcion == 1 && ingredientes == 2)
        printf("Pizza vegetariana\nIngredientes: Tofu, Mozarella y Tomate");


    else if(opcion == 2 && ingredientes == 1)
        printf("Pizza normal\nIngredientes: Pepperoni, Mozarella y Tomate");


    else if(opcion == 2 && ingredientes == 2)
        printf("Pizza normal\nIngredientes: Jamon, Mozarella y Tomate");

    else if(opcion == 2 && ingredientes == 3)
        printf("Pizza normal\nIngredientes: Salmon, Mozarella y Tomate");

    return 0;
}
