#include <iostream>
#include <math.h>
using namespace std;

/* Algorito de ordenación Mergesort - Se compara itera sobre un array buscando el mínimo,
una vez obtenido el mínimo del array se intercambia con la posición iésima del array */

/* Al pasar un objeto tipo array --> el tamaño se acorta y se pierde la información de varios elementes 
con la referencia template arreglamos el problema ---> https://stackoverflow.com/questions/28669571/array-size-not-passing-to-function */

void Intercambio(int *a, int *b){
    
    int aux = *a;
    *a = *b;
    *b = aux;
}

void PrintArray(int* arr, int length)
{
    for(int i=0; i <= length; i++)
    {
        std::cout << *(arr + i) << " ";
    }
    cout << "\n" << endl;

}
void Merge (int numbers[],int start, int central,int end){
    

    int left_items =  central - start + 1;
    int right_items = end - (central);
    /* Left half of the array goest into a new array called L */
    int L[left_items];
    for (int i = 0; i < left_items; i++)
    {
        L[i] = numbers[start+i];
        
    }
     /* Roght half of the array goest into a new array called R */
    int R[right_items];
    for (int j = 0; j < right_items; j++)
    {
        R[j] = numbers[central+1+j];
       
    }


    int i = 0;
    int j = 0;
    int aux = start;
    

    while ((i<left_items) && (j<right_items)){
        if(L[i] < R[j]){
            numbers[aux] = L[i];
            i++;
        }
        else{
             numbers[aux] = R[j];
             j++;
        }
        aux++;
    }


    while(j < right_items){
        
        numbers[aux] = R[j];
        j++;
        aux++;
    }

    while(i < left_items){
        
        numbers[aux] = L[i];
        i++;
        aux++;
    }

        
}

void MergeSort(int* numbers,int start, int end){
    if(start < end){
        int central = start + (end-start)/2;
    
        int left_items =  start - central + 1;
        int right_items = end - (central);
        
        MergeSort(numbers,start,central);
        MergeSort(numbers,central+1,end);


        Merge(numbers,start,central,end);  
    }

}
int main (){
    
    int numeros[] = {8,3,6,4,2,5,7,1};
    int tam = sizeof(numeros)/sizeof(numeros[0]);

    /* The starting array */
    cout << "Array now: \n" <<endl;
    PrintArray(numeros,tam-1);
    /* Quick short algorith */
    MergeSort(numeros,0, tam-1);
    /* Array sorted */
    cout << "Array after Quicksort: \n" <<endl;
    PrintArray(numeros,tam-1);
    

   

    return 0;
}