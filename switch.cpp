#include <iostream>

using namespace std; 

int main(){
    int c = 'r';

    switch (c){ //Analiza la variable c
        case 'r': // Si la variable es igual a este caso ejecuta el codigo de abajo
            cout << "rock";
            break; // termina el bloque de codigo del caso, saliendo del Switch
        case 'p':
            cout << "paper";
            break;
        case 's':
            cout << "sissors";
            break;
        default:  // Caso en que no sea ninguno de los anteriores
            cout << "no valid option";
    }

    return 0;
}