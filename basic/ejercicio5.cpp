#include <iostream>
#include <math.h>
using namespace std;

/* Algoritmo de ordenación por inserción */

/* Función intercambio: intercambia 2 valores */
void intercambio(int *a, int *b){
    
    int aux = *a;
    *a = *b;
    *b = aux;
}


int main (){
    int numeros[] = {4,2,3,1,5};

    int i,j,pos;

    
    for (int i = 0; i <= sizeof(numeros)/sizeof(numeros[0]); i++){
        pos = i;
        
        while ((pos > 0) && (numeros[pos-1] > numeros[pos])){
            intercambio(&numeros[pos-1],&numeros[pos]);
            pos--;
            
        }

    }

   

    return 0;
}