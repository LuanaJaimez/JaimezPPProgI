#include <stdio.h>
#include <stdlib.h>

float aplicarDescuento(float precioProducto);

int main()
{
    float precioVelador = 100;
    float precioDescunto;

    precioDescunto = aplicarDescuento(precioVelador);
    printf("%.2f", precioDescunto);

    return 0;
}

float aplicarDescuento(float precioV)
{
    float precioFinal = 0;

    if(precioV != 0)
    {
        precioFinal = precioV - (float)(precioV*5/100);
    }

    return precioFinal;
}
