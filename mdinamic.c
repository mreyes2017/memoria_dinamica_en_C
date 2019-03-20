#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
/*programa que pida al usuario
la cantidad de números que va a ingresar, y
luego de ingresados, los imprime, incrementando
en 1 cada número utilizando memoria dinamica*/

int leerCantidad()//este es nuestro menu de inicio
{
    int cantidad;
    printf("Cuantos numeros va a ingresar: ");
    cantidad=get_int();
    return cantidad;
}

void leer(int cantidad, int *numeros)//aqui leemos los datos utilizando un for y un array
{

    for (int i=0;i < cantidad; i++)
    {
    numeros[i]=get_int();
    }
}

void imprimir(int cantidad, int *numeros)//aqui imprimimos el resultado
{
    printf("\n");
    for (int i=0;i < cantidad; i++)
    {
        printf("%i ", numeros[i] + 1);
    }
    printf("\n");
}

int main(void)//main
{
    int cantidad = leerCantidad();//variable entera en la cual se almacenara los datos(llamando ala vez la funcion menu)
    int* numeros = malloc(cantidad * sizeof(int));//en el puntero pedimos memoria(malloc) y reservamos el espacio(sizeof) de la variable cantidad

    leer(cantidad, numeros);//llamamos la funcion leer
    imprimir(cantidad, numeros);//llamamos la funcion imprimir

    free(numeros);//libera la memoria

}