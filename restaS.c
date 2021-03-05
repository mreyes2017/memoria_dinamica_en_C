#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int contador = 0;

//Programa que te indica la cantidad de pasos de una resta sucesiva

int restaS(int a, int b)
{
    //casos bases (si el dividendo<divisor o si el residuo=0)
    if (a == 0 || a < b)
    {
        //es como el break en la funcion(ojo en este caso, en el main significa que el programa termino bien)
        return 0;
    }
    else
    {
        //caso recursivo
        int s = restaS(a - b, b);

        //cuenta las restas sucesivas(osea el residuo)
        contador ++;

        //por estetica lo puse en una variable el caso recursivo y por eso lo retorno
        return s;
    }
}

int main(int argc, string argv[])
{
    //validar la entrada de argumentos,parametros como lo quieran llamar :v
    if (argc < 3)
    {
        printf("Modo de uso ./restaS num1 num2 \n");
        //el programa termino mal
        return 1;
    }
    else
    {
        //variable que recibe el argumento en el indice 1 y lo convierte a entero
        int n = atoi(argv[1]);

        //variable que recibe el argumento en el indice 2 y lo convierte a entero
        int n1 = atoi(argv[2]);

        //llamado de la funcion con nuestras variables locales
        restaS(n, n1);

        //imprimimos la respuesta(pongo el contador por que conto cuantas restas sucesivas hubieron que es equivalente al cociente)
        printf("%d\n", contador);


        //si lo pueden hacer mejor me lo pasan
        //jajaja, ok no
        //Happy Coding
    }

    return 0;

}