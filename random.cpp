#include <iostream>
#include <stdlib.h> //random numbers |#include<stdio.h>|
#include <time.h> // time methods

using namespace std;

int main(){
    srand(time(NULL)); // gives random method a seed realted with time
    // rand() % 101 gives a number between 0-100
    int N = 5;
    int numbers[5];

    for (int i = 0; i < N; i++){
        numbers[i] = rand() % 9 + 1;
        cout << numbers[i] << " ";
    }
    cout << endl;
    //SORTS THE ARRAY WITH THE BUBBLE SORT
    for (int i = 0; i < N; i++){
        for (int j = 1; j < N; j++){
            if (numbers[j] > numbers[j-1]){
                int temp = numbers[j];
                numbers[j] = numbers[j-1];
                numbers[j-1] = temp;
            }
        }
    }
    /* PRINTS THE SORTED ARRAY
    for (int i = 0; i < N; i++){
        cout << numbers[i] << " ";
    }
    */
    cout << endl;
    for (int i = 1; i < N; i++){
        if (numbers[i] != numbers[i-1]){
            cout << numbers[i];
            break;
        }
    }
    return 0;
}