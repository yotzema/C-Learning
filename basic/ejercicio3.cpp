 #include <iostream>
 #include <math.h>
 using namespace std;

int main (){
    int i = 0;

    
    long res = 2;
    long elevado = 0; 

    while (i< 10){
        cout << "Iteracion: " << i << "\n";

        elevado++;
        
        res*= elevado;

        i++;
        cout << "Potencia 2 elevada: " << res << "\n";
        
        
    }
    return 0;
 }