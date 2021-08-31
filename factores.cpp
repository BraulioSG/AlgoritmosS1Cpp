#include <iostream>

using namespace std;

int main(){
    int N = 0, f = 0;

    cout << "Ingrese N: "; cin >> N;
    cout << "Ingrese n de factores "; cin >> f;

    for (int i = 1; i <= f; i ++ ){
        int r = N * i; 
        cout << N << "x" << i << "= " << r << endl;
    }
}