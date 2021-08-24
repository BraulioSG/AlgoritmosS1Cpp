#include <iostream>
#include <math.h>

using namespace std;

int main(){
    // VARIABLES 
    int x1 = 0, y1 = 0;
    int x2 = 0, y2 = 0;

    float distancia = 0;

    // INPUTS
    cout << "/* CALCULADORA DE DISTANCIAS */";
    cout << "\nIngrese el primer punto.\nx1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout << "\nIngrese el segundo punto.\nx2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;

    //OUTPUTS

    //a^2 + b^2 = c^2; c = sqrt(a^2 + b^2)
    // c = distancia

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "\nLa distancia entre los 2 puntos es de: " << distancia << "u";

    // determina la lejania entre los 2 puntos
    if (distancia < 5){
        cout << "\nSe encuentra a una distancia " << "cercana" << endl;
    }
    else if (distancia >= 5 && distancia <= 11){
        cout << "\nSe encuentra a una distancia " << "mediana" << endl;
    }
    else if (distancia > 11){
        cout << "\nSe encuentra a una distancia " << "lejana" << endl;
    }

    return 0;
}