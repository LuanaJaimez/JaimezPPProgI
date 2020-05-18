#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    int precio;

}Notebook;


void ordenar(Notebook vec[], int tam);

int main()
{
    Notebook lista[5] =
    {
        {1000, "i3", "intel", 3000},
        {1001, "AMD Athlon", "AMD", 5500},
        {1002, "i7", "Intel", 5000},
        {1003, "Celeron", "intel", 2200},
        {1004, "AMD Ryzen", "AMD", 4500}
    };

    ordenar(lista, 5);

    printf(" ID        Procesador        Marca         Precio\n\n");
    for(int i=0; i<5; i++)
    {
        printf(" %d     %10s         %6s       %d\n", lista[i].id, lista[i].procesador, lista[i].marca, lista[i].precio);
    }


    return 0;
}


void ordenar(Notebook note[], int tam)
{
    Notebook auxNote;

    for(int i=0; i<tam; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(strcmp(note[i].marca, note[j].marca) < 0)
            {
                auxNote = note[i];
                note[i] = note[j];
                note[j] = auxNote;
            }
            else if((strcmp(note[i].marca, note[j].marca) == 0) && note[i].precio > note[j].precio)
            {
                auxNote = note[i];
                note[i] = note[j];
                note[j] = auxNote;
            }
        }
    }
}
