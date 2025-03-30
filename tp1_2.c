#include <stdio.h>

int cuadrado (int n1);
void cuadradoVoid (int n1);

int main ()
{
    int n1, x, y;
    printf("Ingrese un numero:\n");
    scanf("%d",&n1);

    printf("El cuadrado de %d es %d\n", n1, cuadrado(n1));
    printf("El cuadrado de un numero en una funcion void:\n");
    cuadradoVoid(n1);

    printf("ingrese el valor de a:\n");
    scanf("%d",&x);
    printf("ingrese el valor de b:\n");
    scanf("%d",&y);

    printf("Antes de invertir: a = %d, b = %d\n", x, y);

    Invertir(&x, &y);

    printf("Despues de invertir: a = %d, b = %d\n", x, y);

    orden(x,y);

    return 0;
}

int cuadrado (int n1)
{
    printf("El cuadrado del numero es:\n");
    return n1 * n1;
}

void cuadradoVoid (int n1)
{
    printf("El cuadrado de %d es %d\n", n1, n1 * n1);
}

void Invertir(int *a, int *b) 
{
    int x = *a;
    *a = *b;
    *b = x;
}

void orden(int x, int y)
{
    if (x > y)
    {
        printf("El orden es %d es el mayor, %d es el menor",x,y);
    }else{
        printf("El orden es %d es el mayor, %d es el menor",y,x);
    }
    
}

/*
4. Genere en el repositorio un archivo que se llame tp1_2.c y resuelva las siguientes tareas mediante el uso de funciones: 
a) Haga una función que devuelva el cuadrado de un número b) Haga la función anterior, pero devolviendo un tipo void 
c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable  
d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.   void Invertir(a,b) 
    //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a  
e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor. void orden(a,b)  
    //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande 
f) Utilice las funciones anteriores para leer pares de valores e imprimirlos por pantalla. 
g) Al finalizar, debe subir todos los cambios al repositorio, usando los siguientes comandos. 
    i. git add . 
    ii. git commit -m “ejercicio 2.4 completado” 
    iii. git push 
*/