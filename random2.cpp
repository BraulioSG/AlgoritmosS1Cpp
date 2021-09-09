#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int N = 30, min = 10, counter = 0;
    int nums[30]; 

    for (int i = 0; i < N; i++){
        //int num = rand() % 9 + 1;
        nums[i] = rand() % 9 + 1;
        if (nums[i] < min){
            min = nums[i];
        }
        cout << nums[i] << " "; 
    }
    for (int j = 0; j < N; j++){
        if (nums[j] == min){
            counter++;
        }
    }
    cout << endl << "el numero minimo ("<< min << ") se repite " << counter << " veces";
}