#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int x1 = 0, y1 = 0;
    int x2 = 0, y2 = 0;

    float distancia = 0;

    cout << "/* CALCULADORA DE DISTANCIAS */";
    cout << "\nIngrese el primer punto.\nx1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout << "\nIngrese el segundo punto.\nx2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;

    //a^2 + b^2 = c^2; c = sqrt(a^2 + b^2)

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "\nLa distancia entre los 2 puntos es de: " << distancia << "u";

    return 0;
}