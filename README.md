# Algoritmos 1er Semestre
Apuntes del primer semestre de Analisis y Diseño de Algoritmos, de ISGC (Ingenieria en Sistemas y Graficas Computacionales). La documentación viene en cada codigo, explicando para que sirve cada cosa. Esta clase está en c++.

## Tipos de datos
Los tipos de datos también son los tipos de variables que se puede asignar en un programa
- int => Enteros 
- float => Decimales
- boolean => verdero o falso
- char => un caracter
- string => un texto
- long => el doble de un entero
- double => el doble de un decimal.

## funcion main() 
Todo el codigo dentro de la funcion *int main() {}* sera lo que se ejecuta. 

## Declaracion de Variables en C++
Para la declaracion de varialbes en C++ se usa el tipo de dato, el nombre de la variable, signo de asignacion y valor.
*IMPORTANTE NO OLVIDAR EL PUNTO Y COMA (;) AL FINAL DE CUALQUIER INSTRUCCION*
```
int edad = 17
```
- int => tipo de variable
- edad => nombre de la variable
- (=) => signo de asignacion
- 17 => valor de la variable

## Pedir datos e imprimir datos en consola C++
Para empezar a pedir datos y para poder imprimirlos en la consola es necesario importar la libreria *iostream* al codigo. `#include <iostream>`. Luego se agrega el *namespace* (muy complejo de entender el *namespace* para primer semestre) al codigo. `using namespace std`. Finalmente para pedir datos y almacenarlos en una variable se usa `cin` (console input) `cin >> edad`. Para imprimir datos en la consola se usa `cout` (console output) `cout << "la edad es " << edad << endl;` donde la variable no lleva comillas y *endl* significa (end of the line)

## Condicionales 
Las condicionales son el rombo en el diagrama de flujo, y como su nombre lo indica, sirven para ejecutar un codigo dependiendo de una condicion. *if (condicion) then [...] else then [...]* y cada bloque se separa por las llaves `{}`. las condicionales pueden ser 3: if, else if (opcional) y else(opcional).
```
if (condicion) {
    ejecuta este codigo;
}
else if (condicion 2){`
    ejecuta este otro codigo;
}
else{
    ejecuta este ultimo codigo;
}   
```
### Operadores Logicos
Para complementar a las condicionales estan los operadores logicos **AND**, **OR**, **XOR**, **NOT**; que sirven para hacer una una condicional mas compleja. 
#### AND
ambas condiciones tienen que ser verdaderas para que el reultado sea ***true*** de otra forma regresara ***false***
#### OR
Con una condicion verdadera aunque la otra llegue a ser falsa regresara ***true*** si ambas son falsas regresara ***false***
### XOR
Solo una condicion debe ser verdadera para que sea ***true*** si ambas son verdaderas entonces sera ***false***
### NOT
Invierte el resultado donde un *false* se hace ***true*** y un se true se hace ***false***

## Matematicas en C++
Para algunas operaciones matematicas es necesario importar la libreria `math.h` al codigo. `#import <math.h>`
Esta libreria te permite hacer operaciones mas complejas como:
- srqt() raiz cuadrada
- pow() potencias
- funciones trigonometricas
- etc.