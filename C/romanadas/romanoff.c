#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>


/*void saludo(){
    printf("Hola\n");    
}


int main(){
    saludo();
}*/


int mult(int a, int b){
    int resultado;
    resultado = a * b;
    return resultado;
}

int suma(int a, int b){
    int resultado;
    resultado = a + b;
    return resultado;
}

int main(){
    //printf ("%i\n", mult(9,2));
    printf ("%i", suma(mult(15, 250), 0));
}