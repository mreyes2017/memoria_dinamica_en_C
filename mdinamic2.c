#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int main(void)
{

    //variable para especificar cuanta memoria vamos a reservar
    int n;

    //puntero en el cual reservaremos la memoria
    char *puntcadena;

    printf("Ingrese el numero de caracteres de la cadena: ");

    n = get_int("");

    //pedimos memoria (malloc) y reservamos el espacio(sizeof)
    puntcadena = (char *)malloc(n * sizeof(char));

    printf("\nSe ha reservado espacio de memoria para %d caracteres", n);

    printf("\nIngrese la cadena:");


    puntcadena = get_string("");

    //imprimimos lo que almacenamos
    printf("El valor almacenado en la variable de la cadena es: %s\n", puntcadena);

    //imprimimos la direccion de memoria
    printf("La direccion de memoria de la cadena es: %p\n", puntcadena);

    //liberamos la memoria
    free(puntcadena);

    return 0;

}