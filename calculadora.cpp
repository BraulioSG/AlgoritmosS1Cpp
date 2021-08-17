#include<iostream>
using namespace std;

int main(){
    // VARIABLES  //
    char operador = ' ';
    int x = 0, y = 0, r = 0;

    cout << "Suma (s), Resta(r), Multiplicacion(m), Division(d)\n"; cin >> operador;

    //*AND statement &&; OR statement ||*//
    if (operador != 's' && operador != 'r' && operador != 'd' && operador != 'm'){ //Si el operador no es igual a: s, r, d o m
        cout << "\'" <<  operador << "\' No es un operador valido" << endl;       //Muestra que no es un operador valido
        return 0;                                                                //Termina el programa
    }

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    
    /* 
    [else] if (operador == {s, r, m o d}){
        el resultado es igual a la operacion de x & y y se almacena en 'r'
        imprime el resultado "el resultado de la operacion: " concatenado a la variable 'r';
    }
    */

    if (operador == 's'){
        r = x + y;
        cout << "El resultado de la suma: " << r << endl;

    }
    else if (operador == 'r'){
        r = x - y;
        cout << "El resultado de la resta: " << r << endl;

    }
    else if (operador == 'm'){
        r = x * y;
        cout << "El resultado de la multiplicacion: " << r << endl;
        
    }
    else if (operador == 'd'){
        
        if (y == 0){                                                                //Si y == 0, x/y = indeterminado
            cout << "Y no puede ser igual a 0, el resultado es indeterminado";     //imprime el error
            return 0;                                                             //termina el programa
        }
        else {                                                    //Si y != 0 entonces sigue ejecutando de manera normal
            r = x / y;
            cout << "El resultado de la division " << r << endl;
        }
        
    }
    else {
        cout << "Algo salió mal"; //salida de emergecia por si algo sale mal
    }

    return 0; //termina el programa

}