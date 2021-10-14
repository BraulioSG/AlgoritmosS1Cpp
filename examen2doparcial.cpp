#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  cout << "Examen Parcial de Braulio Solorio" << endl;
	srand(time(NULL));
	//Ejercicio 1;
	int ej1[5];
	
	cout << "ingresa los 5 valores del primer ejercicio" << endl; 
	for (int i = 0; i < 5; i++){
		int num = 0;
		cin >> num;
		ej1[i] = num;
	}
	for (int i = 5; i > 0; i--){
		cout << ej1[i - 1] << "\t";
	}
	cout << endl << endl;
	
	//Ejercicio 2;
	
	int ej2[7], ej2num;
	cout << "ingresa el numero del ejercicio 2: ";
	cin >> ej2num;
	for (int i = 1; i <= 7; i++){
		int result = i * ej2num;
		ej2[i-1] = result;
		cout << ej2[i-1] << "\t";
	}
	cout << endl << endl;
	
	//Ejercicio 3;
	cout << "Ejercicio 3" << endl;
	int ej3arr1[5], ej3arr2[5], ej3sum[5];
	for (int i = 0; i < 5; i++){
		int a, b;
		a = 1 + rand() % 14;
		b = 1 + rand() % 14;
    if(a%2==0){
      ej3arr1[i] = a;
    }
    else{
      ej3arr1[i] = a+1;
    }
    if(b%2==0){
      ej3arr2[i] = b;
    }
    else{
      ej3arr2[i] = b+1;
    }
		ej3sum[i] = ej3arr1[i] + ej3arr2[i];
		cout << ej3arr1[i] << "+" << ej3arr2[i] << "=" << ej3sum[i] << endl;
	}
	cout << endl;
	
	//Ejercicio 4;
	cout << "ejercicio 4" << endl;
	while (true){
		string cmd;
		cout << "hola" << endl;
		cin >> cmd;
		if (cmd == "exit" || cmd == "Exit"){
			break;
		} 
	}
	cout << endl;
	
	//Ejercicio 5;
	cout << "ejercicio 5" << endl;
	int ej5nums[20], ej5input;
	bool notfound = true, notvalid = true;
	for (int i = 0; i < 20; i++){
		ej5nums[i] = 1 + rand() % 10;
		cout << ej5nums[i] << "\t";
	}
	cout << endl;
	while(notvalid){
		cout << "ingrese numero a buscar "; cin >> ej5input;
		if(ej5input <= 10 && ej5input > 0){
			for (int j = 0; j < 20; j++){
				if (ej5nums[j] == ej5input){
					cout << "index: " << j << endl;
					notfound = false; 
				}
			}
			if(notfound){
				cout << "no se encontro el numero en el arreglo";
			}
			notvalid = false;
		}
		else{
			cout << "numero no valido, debe ser un numero del 1 al 10";
		}
		cout << endl;
	}	
	
	//Ejercicio 6;
	cout << "ejercicio 6" << endl;
	int ej6N;
	string ej6word;

	cout << "¿que palabra quieres imprimir?"; cin >> ej6word;
	cout << "¿cuantas veces? "; cin >> ej6N;

	for (int i = 0; i < ej6N; i++){
		cout << i + 1<< ".- " << ej6word << endl; 
	}
	cout<<endl;
	//Ejercicio 7;
  cout << "ejercicio 7" << endl;
	float ej7[10], ej7prom = 0;
	int ej7cont = 0;
	for (int i = 0; i < 10; i++){
		ej7[i] = 1.0 + ((rand() % 91)/10.0);
		cout << ej7[i] << "\t";
	}
  cout << "\ncalificaciones arriba de 6" << endl;
  for (int i = 0; i < 10; i++){
    if(ej7[i] >= 6){
      cout << ej7[i] << "\t";
      ej7prom += ej7[i];
      ej7cont++;
    }
	}
  cout << "\npromedio de aprobados: " << (ej7prom / ej7cont) << endl;
  cout<<endl;
  //Ejercicio 8;
  cout << "ejercicio 8" << endl;
  int ej8pago, ej8cambio;
  cout << "cuanto es la cantidad? "; cin >> ej8pago;
  ej8cambio = ej8pago/100;
  ej8pago -= ej8cambio * 100;
  cout << "billetes de 100: " << ej8cambio << endl;
  ej8cambio = ej8pago / 20;
  ej8pago -= ej8cambio * 20;
  cout << "billetes de 20: " << ej8cambio << endl;
  cout << "monedas de a peso: " << ej8pago << endl;
  cout <<endl;
  //Ejercicio 09;
  cout << "ejercicio 9" << endl;
  string ej9names[3];
  cout << "ingrese 3 nombres" << endl;
  cin >> ej9names[0] >> ej9names[1] >> ej9names[2];
  for(int i = 0; i < 3; i ++){
    for (int j = 0; j < 2; j++){
      if(ej9names[j+1] < ej9names[j]){
        string tempname = ej9names[j];
        ej9names[j] = ej9names[j+1];
        ej9names[j+1] = tempname;  
      }
    }
  }
  cout << ej9names[0] << endl << ej9names[1] << endl << ej9names[2] << endl;
  cout<<endl;
  //Ejercicio 10;
  cout << "ejercicio 10" << endl;
  string ej10nombres[10] = {"jose", "maria", "josefa", "miguel", "rodrigo", "luis", "violeta", "carla", "santiago", "roberto"};
  int ej10ids[10] = {1,2,3,4,5,6,7,8,9,10};
  char valor = 's';
  do{
    for(int i = 0; i < 10; i++){
      cout << ej10ids[i] << "\t" << ej10nombres[i] << endl;
    }
    cout << "desea borrar un valor? (s/n)"; cin >> valor;
    if(valor != 'n'){
      int id;
      cout << "ingrese ID a borrar "; cin >> id;
      for(int j = 0; j < 10; j++){
        if(ej10ids[j] == id){
          ej10ids[j] = 0;
          ej10nombres[j] = "X";
        }
      }
    } 

  }while(valor != 'n');
  
}