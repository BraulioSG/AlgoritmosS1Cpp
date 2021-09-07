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
```cpp
int edad = 17
```
- int => tipo de variable
- edad => nombre de la variable
- (=) => signo de asignacion
- 17 => valor de la variable

## Pedir datos e imprimir datos en consola C++
Para empezar a pedir datos y para poder imprimirlos en la consola es necesario importar la libreria *iostream* al codigo. 
```cpp
#include <iostream>
```
Luego se agrega el *namespace* (muy complejo de entender el *namespace* para primer semestre) al codigo.
```cpp
using namespace std,
```
 Finalmente para pedir datos y almacenarlos en una variable se usa `cin` (console input) 
 ```cpp 
 cin >> edad;
 ```
Para imprimir datos en la consola se usa `cout` (console output) 
```cpp
cout << "la edad es " << edad << endl;
``` 
donde la variable no lleva comillas y *endl* significa (end of the line)

## Condicionales 
Las condicionales son el rombo en el diagrama de flujo, y como su nombre lo indica, sirven para ejecutar un codigo dependiendo de una condicion. *if (condicion) then [...] else then [...]* y cada bloque se separa por las llaves `{}`. las condicionales pueden ser 3: if, else if (opcional) y else(opcional).
```cpp
if (condicion) {
    ejecuta este codigo;
}
else if (condicion2){`
    ejecuta este otro codigo;
}
else{
    ejecuta este ultimo codigo;
}   
```
### Operadores Logicos
Para complementar a las condicionales estan los operadores logicos **AND**, **OR**, **XOR**, **NOT**; que sirven para hacer una una condicional mas compleja. 
#### AND &&
ambas condiciones tienen que ser verdaderas para que el reultado sea ***true*** de otra forma regresara ***false***
| condicion A | condicion B | resultado|
| --- | --- | --- |
| 1 | 1 | 1 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 0 | 0 | 0 |
#### OR ||
Con una condicion verdadera aunque la otra llegue a ser falsa regresara ***true*** si ambas son falsas regresara ***false***
| condicion A | condicion B | resultado|
| --- | --- | --- |
| 1 | 1 | 1 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 0 | 0 | 0 |
#### XOR ^^
Solo una condicion debe ser verdadera para que sea ***true*** si ambas son verdaderas entonces sera ***false***
| condicion A | condicion B | resultado|
| --- | --- | --- |
| 1 | 1 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 0 | 0 | 0 |
#### NOT !
Invierte el resultado donde un *false* se hace ***true*** y un se true se hace ***false***
| condicion A | resultado|
| --- | --- |
| 0 | 1 |
| 1 | 0 |

## Matematicas en C++
Para algunas operaciones matematicas es necesario importar la libreria `math.h` al codigo. 
```cpp
#include <math.h>
```
Esta libreria te permite hacer operaciones mas complejas como:
- srqt() raiz cuadrada
- pow() potencias
- funciones trigonometricas
- etc.

## Switch case
Sirve igual que los if e if else donde analiza una condicion y revisa cada caso.
```cpp
int grade = 9;

switch (grade){
    case 5:
        cout << "tu calificacion es de 5";
        break;
    case 7:
        cout << "tu calificacion es de 9";
        break;
    case 9:
        cout << "tu calificacion es de 9";
        break;
    default:
        cout << "tu calificacion no esta en las opciones";
        break;
}
```
En el caso anterior se mostrara en pantalla `tu calificacion es de 9`,  donde `break` limita las acciones de casa caso.  `default` es una sentencia que es equivalente al `else` que se ejecuta cuando ningun caso es valido.


## LOOPS
los loops son bucles que ejecutan varias veces un codigo mientras se cumpla una concidion. 
### For Loop
se declara con la palabra clave `for (){}`, dentro de los parentecis van 3 valores
* variable de iteracion
* condicion
* pasos

la varible de iteracion es la variable que se va a evualuar para ver si la condicion continua o no `int i = 0`. 
la condicion se encarga si se va a seguir ejecutando el bucle o no `i < 10` se ejecutara siempre y cuando i sea menor a 10. 
los pasos son como cambia la variable de iteracion `i++` a i se le suma uno por cada vez que se ejecute el ciclo.
ya armado quedaria:
```cpp
for (int i = 0; i < 10; i++){
    //bloque de ejecucion
    cout << i << " "; 
}
```
`output: 0 1 2 3 4 5 6 7 8 9`

### While Loop y Do While Loop
el while y do while al igual que el `for` es un bucle que depende de una condicion para ejecutarse solo que su sintaxis es diferente. el while solo tiene una condicion como parametro, la variable de iteracion y los pasos se definen aparte en el codigo.
```cpp
int i = 0;

while (i < 10){
    //bloque de ejecucion
    cout << i << " ";
    i++; 
}
```
`output: 0 1 2 3 4 5 6 7 8 9`

El do while es igual que el while solo que primero ejecuta y luego revisa si la condicion es correcta
```cpp
do{
    //bloque de ejecucion
    cout << i << " "; 
    i++
}while(i < 10)
```
`output: 0 1 2 3 4 5 6 7 8 9`
