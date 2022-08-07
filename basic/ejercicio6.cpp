#include <iostream>
#include <math.h>
using namespace std;

/* Algorito de ordenación por selección - Se compara itera sobre un array buscando el mínimo,
una vez obtenido el mínimo del array se intercambia con la posición iésima del array */


void Intercambio(int *a, int *b){
    
    int aux = *a;
    *a = *b;
    *b = aux;
}

void PrintArray(int[] numeros){
    
    int tam = sizeof(numeros)/sizeof(numeros[0]);
    
    for (int i = 0; i < tam; i++){
        cout << "Elemento : "<< numeros[i] << "\n" ;
    }
}
int main (){
    int numeros[] = {4,2,3,1,5};

    int tam = sizeof(numeros)/sizeof(numeros[0]);
    int i,j,pos,min;

    
    for (int i = 1; i < tam; i++){
       
        pos = i-1;
        min = i-1;
        while (pos <= tam){
            if(numeros[pos] < numeros[pos-1]){
               min = pos;
            }
            
            pos++;
        }

        Intercambio(&numeros[i-1],&numeros[min]);

    }
    
    PrintArray(numeros);

   

    return 0;
}
