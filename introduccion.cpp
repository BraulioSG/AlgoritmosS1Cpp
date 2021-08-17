#include <iostream>
using namespace std;

int main(){
    bool booleano = true;               //Verdadero o Falso (8 bits == 1byte)
    int entero = 1;                     //Numeros Enteros (32 bits == 4 bytes)
    float deciaml = 2.5;                // Numeros con punto Decimal (32 bits == 4bytes; 2 para enteros 2 para decimales)
    long enteroLargo = 10000000;     //Doble de capacidad de enteros (El doble de un int)
    double decimalLargo = 2234.23423;   //Doble de capacidad de Decimales (El doble de un float)
    char caracter = 'a';                //Un solo caracter  (8 bits == 1byte)
    string text = "texto";              //Una cadena de caracteres (necesario std) cada letra ocupa el esapcio de un caracter (1byte por caracter)

    //Concicionales 
    if (entero > 0){ // (a {==, !=, >=, <=, <, >} b)    //si la condición se cumple, entonces se ejectua el codigo dentro del bloque
        cout << entero << " es mayor a cero" << endl;  //{ CODIGO DENTRO DEL 1er BLOQUE }
    }
    else if (entero < 0){                               //si la condicion anterior no se cumple, se efectua esta condicion
        cout << entero << " es menor a cero" << endl;  //{ CODIGO DENTRO DEL 2do BLOQUE }
    }
    else{                                               //si ninguna de las condiciones se cumple, se ejecuta el ultimo bloque (siempre va al final y es opcional su uso)
        cout << entero << " es igual a cero" << endl;  //{ CODIGO DENTRO DEL ULTIMO BLOQUE}
    }


}