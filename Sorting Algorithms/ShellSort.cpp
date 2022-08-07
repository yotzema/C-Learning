#include <iostream>
#include <math.h>
using namespace std;

/* Algorito de ordenación por selección - Se compara itera sobre un array buscando el mínimo,
una vez obtenido el mínimo del array se intercambia con la posición iésima del array */

/* Al pasar un objeto tipo array --> el tamaño se acorta y se pierde la información de varios elementes 
con la referencia template arreglamos el problema ---> https://stackoverflow.com/questions/28669571/array-size-not-passing-to-function */

void Intercambio(int *a, int *b){
    
    int aux = *a;
    *a = *b;
    *b = aux;
}

template <size_t N> void PrintArray(int (&numbers)[N]){
    
    for (int item: numbers){
        cout << item << "  " ;
    }
    cout << "\n" << endl;
}
int main (){
    int numeros[] = {6,1,5,2,3,4,0};

    int tam = sizeof(numeros)/sizeof(numeros[0]);
    
    int salto = tam/2;
    
    while (salto > 0){
        
        int cambios = 0;
        for (int i = salto; i < tam; i++){
            
            int pivot = i - salto;    
            if (numeros[i] < numeros[pivot]){
                 Intercambio(&numeros[i],&numeros[pivot]);
                 cambios++;
            }


            
        }
        if (cambios == 0){
             salto /= 2;
        }
        PrintArray(numeros);
        
    }

   

    return 0;
}
