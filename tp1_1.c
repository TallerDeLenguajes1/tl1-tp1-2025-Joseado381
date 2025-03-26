#include <stdio.h>

int main() {
    int variable = 10;     // Variable de tipo entero
    int *puntero = &variable;  // Puntero que apunta a la variable

    printf("1) Contenido del puntero: %d\n", *puntero);
    printf("2) Direccion de memoria almacenada por el puntero: %p\n", puntero);
    printf("3) Direccion de memoria de la variable: %p\n", &variable);
    printf("4) Direccion de memoria del puntero: %p\n", &puntero);
    printf("5) Tamaño de memoria utilizado por la variable: %lu bytes\n", sizeof(variable));

    return 0;
}
/*
Declare un puntero en el procedimiento principal que apunte a una variable de algún tipo y muestre por pantalla lo siguiente: 
    1) El contenido del puntero 
    2) La dirección de memoria almacenada por el puntero.  
    3) la dirección de memoria de la variable. 
    4) la dirección  de memoria del puntero. 
    5) el tamaño de memoria utilizado por esa variable usando la función sizeof() 
*/