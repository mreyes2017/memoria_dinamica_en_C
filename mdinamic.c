#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
/*programa que pida al usuario
la cantidad de números que va a ingresar, y
luego de ingresados, los imprime, incrementando
en 1 cada número utilizando memoria dinamica*/


//este es nuestro menu de inicio
int leerCantidad()
{
    int cantidad;
    printf("Cuantos numeros va a ingresar: ");
    cantidad = get_int();
    return cantidad;
}

//aqui leemos los datos utilizando un for y un array
void leer(int cantidad, int *numeros)
{
    for (int i = 0; i < cantidad; i++)
    {
        numeros[i] = get_int();
    }
}


//aqui imprimimos el resultado
void imprimir(int cantidad, int *numeros)
{
    printf("\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("%i ", numeros[i] + 1);
    }
    printf("\n");
}

//main
int main(void)
{
    //variable entera en la cual se almacenara los datos(llamando ala vez la funcion menu)
    int cantidad = leerCantidad();

    //en el puntero pedimos memoria(malloc) y reservamos el espacio(sizeof) de la variable cantidad
    int *numeros = malloc(cantidad * sizeof(int));

    //llamamos la funcion leer
    leer(cantidad, numeros);

    //llamamos la funcion imprimir
    imprimir(cantidad, numeros);

    //libera la memoria
    free(numeros);

    return 0;

}