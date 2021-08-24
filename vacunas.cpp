/*
SISTEMA DE VACUNACION
si la persona esta entre los siguientes rangos de:
50 < n; le toca la segunda dosis
18 < n > 50; le toca la primera dosis
n < 18; aun no le toca la vacuna
*/

#include <iostream>

using namespace std;

int main(){
    int edad = 0;
    cout << "\nIngrese su edad"; cin >> edad;

    if(edad > 50 ){
        cout << "\nLe toca la segunda dosis";
    }
    else if (edad > 18 && edad < 50){
        cout << "\nLe toca la primera dosis";
    }
    else{
        cout << "\nAun no se puede vacunar";
    }
    return 0;
}
