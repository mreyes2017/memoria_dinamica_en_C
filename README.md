# memoria_dinamica_en_C
Ejemplos sencillos de como manejar memorias dinamicas en C
Memoria dinámica: malloc y free

Los variables y vectores en C ocupan un tamaño prefijado, no pueden variarlo durante la ejecución del programa. 
Por medio de punteros se puede reservar o liberar memoria dinámicamente, es decir, según se necesite. Para ello existen varias funciones estándares, de la biblioteca <stdlib.h>

La función malloc sirve para solicitar un bloque de memoria del tamaño suministrado como parámetro. Devuelve un puntero a la zona de memoria concedida: 

    void* malloc ( unsigned numero_de_bytes ); 

El tamaño se especifica en bytes. Se garantiza que la zona de memoria concedida no está ocupada por ninguna otra variable ni otra zona devuelta por malloc.
Si malloc es incapaz de conceder el bloque (p.ej. no hay memoria suficiente), devuelve un puntero nulo. 
Punteros void*
La función malloc devuelve un puntero inespecífico, que no apunta a un tipo de datos determinado. En C, estos punteros sin tipo se declaran como void*
Muchas funciones que devuelven direcciones de memoria utilizan los punteros void*. Un puntero void* puede convertirse a cualquier otra clase de puntero: 

    char* ptr = (char*)malloc(1000);
Operador sizeof
El problema de malloc es conocer cuántos bytes se quieren reservar. Si se quiere reservar una zona para diez enteros, habrá que multiplicar diez por el tamaño de un entero. 
El tamaño en bytes de un elemento de tipo T se obtiene con la expresión 

    sizeof (T)

El tamaño de un char siempre es 1 (uno). 

Función free
Cuando una zona de memoria reservada con malloc ya no se necesita, puede ser liberada mediante la función free.

    void free (void* ptr); 

ptr es un puntero de cualquier tipo que apunta a un área de memoria reservada previamente con malloc.
Si ptr apunta a una zona de memoria indebida, los efectos pueden ser desastrosos, igual que si se libera dos veces la misma zona. 


    Ejemplo de uso de malloc, free y sizeof

    #include <stdlib.h>
    int* ptr;	/* puntero a enteros */
    int* ptr2;	/* otro puntero */

    /* reserva hueco para 300 enteros */
      ptr = (int*)malloc ( 300*sizeof(int) );

     ptr[33] = 15; /* trabaja con el área de memoria */

    rellena_de_ceros (10,ptr); 	/* otro ejemplo */

    ptr2 = ptr + 15; /* asignación a otro puntero */

    /* finalmente, libera la zona de memoria */
    free(ptr);	

Obsérvese que hay que convertir el puntero void* devuelto por malloc a un int*, para que no haya incompatibilidad de tipos.
Texto extraido de la web:http://sopa.dis.ulpgc.es/fso/cpp/intro_c/introc75.htm
