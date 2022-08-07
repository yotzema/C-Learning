#include <iostream>
#include <math.h>
using namespace std;

/* Algorito de ordenación Quicksort - Se compara itera sobre un array buscando el mínimo,
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

void QuickSort(int numbers[], int start, int end){
    
    int central = (start + end)/2;
    int pivot = numbers[central];
    int i = start;
    int j = end;

    do{
        while(numbers[i] < pivot)
            i++;
        while (numbers[j] > pivot) 
            j--;
        
        if (i <= j){
            Intercambio(&numbers[i], &numbers[j]);
            i++;
            j--;
        }
    }while(i<=j);

    if(start < j){
         QuickSort(numbers,start,j);
    }
    if(i < end){
         QuickSort(numbers,i, end);
    }
}
int main (){
    
    int numeros[] = {8,3,6,4,2,5,7,1};
    int tam = sizeof(numeros)/sizeof(numeros[0]);

    /* The starting array */
    cout << "Array now: \n" <<endl;
    PrintArray(numeros);
    /* Quick short algorith */
    QuickSort(numeros,0, tam-1);
    /* Array sorted */
    cout << "Array after Quicksort: \n" <<endl;
    PrintArray(numeros);

   

    return 0;
}