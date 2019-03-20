#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
int contador=0;
int restaS(int a,int b)
{
    if( a==0 || a<b )//casos bases (si el dividendo<divisor o si el residuo=0)
    {
        return 0;//es como el break en la funcion(ojo en este caso,en el main significa que el programa termino bien)
    }else
    {

        int s = restaS( a-b , b );//caso recursivo
        contador ++;//cuenta las restas sucesivas(osea el residuo)
        return s;//por estetica lo puse en una variable el caso recursivo y por eso lo retorno
    }
}

int main ( int argc , string argv[] )
{
    if ( argc < 3 )//validar la entrada de argumentos,parametros como lo quieran llamar :v
    {
        return 1;//el programa termino mal
    }else
    {
       int n=atoi( argv[1] );//variable que recibe el argumento en el indice 1 y lo convierte a entero
       int n1=atoi( argv[2] );//variable que recibe el argumento en el indice 2 y lo convierte a entero
       restaS( n , n1 );//llamado de la funcion con nuestras variables locales
       printf("%d\n",contador);//imprimimos la respuesta(pongo el contador por que conto cuantas restas sucesivas hubieron que es equivalente al cociente)
       //si lo pueden hacer mejor me lo pasan
       //jajaja, ok no
       //Happy Coding
    }



}