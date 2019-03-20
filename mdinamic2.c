#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int main()
{

int n;//variable para especificar cuanta memoria vamos a reservar

char *puntcadena;//puntero en el cual reservaremos la memoria

printf("Ingrese el numero de caracteres de la cadena: ");
n=get_int();
puntcadena=(char*)malloc(n*sizeof(char));//pedimos memoria (malloc) y reservamos el espacio(sizeof)

printf("\nSe ha reservado espacio de memoria para %d caracteres", n);

printf("\nIngrese la cadena:");
puntcadena=get_string();


printf("El valor almacenado en la variable de la cadena es: %s\n", puntcadena);//imprimimos lo que almacenamos

printf("La direccion de memoria de la cadena es: %p\n", puntcadena);//imprimimos la direccion de memoria

free(puntcadena);//liberamos la memoria
return 0;
}