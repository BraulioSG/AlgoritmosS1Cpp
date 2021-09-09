#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int pares[20];
    int multiplicacion = 1;

    for (int i = 1; i <= 20; i++){
        pares[i] = 2 * i; 
        cout << pares[i] << ", ";
        multiplicacion = pow(2,i);
        cout << multiplicacion << endl; 
    }
    cout << endl << multiplicacion; 

    return 0;
}