#include <iostream>
#include <math.h>
using namespace std;


void intercambio(int *a, int *b){
    
    int aux = *a;
    *a = *b;
    *b = aux;
}


int main (){
    int numeros[] = {4,1,2,3,5};

    int i,j,aux;

    for (int i = 0; i <= sizeof(numeros)/sizeof(numeros[0]); i++){
        for (int j = 0; j <= sizeof(numeros)/sizeof(numeros[0]); j++)
        {
            if (numeros[j] > numeros[j+1]){
                intercambio(&numeros[j], &numeros[j+1]);

            } 
            /* code */
        }

    }

    for (int i = 0; i <= sizeof(numeros)/sizeof(numeros[0]); i++){
        cout << "Elemento : "<< numeros[i] << "\n" ;
    }

    return 0;
}