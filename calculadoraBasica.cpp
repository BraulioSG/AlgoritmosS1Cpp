#include <iostream>

using namespace std;

int main(){
    char opcion = ' ';

    char medida = ' ';       //variables de conversion
    float m = 0.0, k = 0.0; //variables de conversion

    int figura = ' ';
    float resArea = 0.0;                //Variables de area
    float x = 0.0, y = 0.0, z = 0.0;   //Variables de are
    const float PI = 3.14159;         //Constante PI    

    cout << "/* Bienvenido a la calculadora basica de Braulio */";
    cout << "\nQue quieres usar: convertidor (c), calcular Areas (a) o salir (s)\n"; cin >> opcion;
    
    if (opcion == 'c' || opcion == 'C'){ //CONVERSON
        cout << "Cual es la medida inicial: metros (m) o kilomteros (k): "; cin >> medida;

        if (medida == 'm' || medida == 'M'){
            cout << "Inserte el primer valor en (" << medida << "): "; cin >> m;
            k = m / 1000.0;
            cout << "La conversion a kilometros es = " << k << " km" << endl;
        }
        else if (medida == 'k' || medida == 'K'){
            m = k * 1000.0;
            cout << "La conversion a metros es = " << m << " m" << endl;
        }
        else {
            cout << "Oh no!\nAlgo salio mal... Intentelo de nuevo mas tarde" << endl;
        }

        cout << "Gracias por usar este conversor" << endl;
    }

    if (opcion == 'a' || opcion == 'A'){
        cout << "A que figura quieres sacarle el area:\n1- Prisma (x,y,z) \n2- Triangulo (b,h) \n3- Circulo (r)\n:"; cin >> figura;

        if (figura == 1){
            cout << "Inserte valor en 'x': "; cin >> x;
            cout << "Inserte valor de 'y': "; cin >> y;
            cout << "Inserte valor de 'z': "; cin >> z;
            resArea = 2 * ((x * y) + (y * z) + (x * z));
        }
        else if (figura == 2){
            cout << "Inserte valor de la base: "; cin >> x;
            cout << "Inserte valor de la altura: "; cin >> y;

            resArea = (x * y) / 2.0;
        }
        else if (figura == 3){
            cout << "Inserte valor de radio: "; cin >> x;

            resArea = PI * (x * x);
        }

        else{
            cout << "Ingrese una opcion valida";
            return 0;
        } 

        cout << "La area es igual a: " << resArea << " u^2" << endl; 
    }

    else if (opcion == 's' || opcion == 'S'){
        cout << "Salida exitosa";
        return 0;
    }

    else {
        cout << "Oh No!\nOpcion no Valida";
        return 0;
    }
    

    return 0;
}