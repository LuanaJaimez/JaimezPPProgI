#include <stdio.h>
#include <stdlib.h>

int contarCaracteres(char cadenaCaracteres[], char caracter);

int main()
{
    char cadena[] = { 'c', 'f', 't', 'a', 'c', 'i' };
    char caracter = 'a';

    printf("%d", contarCaracteres(cadena, caracter));

    return 0;
}

int contarCaracteres(char cadenaCaracteres[], char caracter)
{
    int contadorC = 0;
    int i = 0;

    while(cadenaCaracteres[i] != '\0')
    {
        if(cadenaCaracteres[i] == caracter)
        {
            contadorC++;
        }
            i++;
    }
    return contadorC;
}
