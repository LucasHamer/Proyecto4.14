#include<stdio.h>
#include<stdlib.h>

int main()
{
    float importe,descuento;
    printf("Declare el importe de su compra: ");
    scanf("%f",&importe);

    if(importe<55)
    {
        descuento=importe-(importe*4.5)/100;
        printf("Recibio un descuento del 4.5%\n");
        printf("Por lo que el importe final sera de : $%0.2f",descuento);

    }
    if(importe>=55 && importe<=100)
    {
        descuento=importe-(importe*8)/100;
        printf("Recibio un descuento del 8%\n");
        printf("Por lo que el importe final sera de : $%0.2f",descuento);
    }
    if(importe>100)
    {
        descuento=importe-(importe*10.5)/100;
        printf("Recibio un descuento del 10.5%\n");
        printf("Por lo que el importe final sera de : $%0.2f",descuento);
    }

    return 0;
}
