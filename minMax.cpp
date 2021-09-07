#include <iostream>

using namespace std;

int main(){
    int N = 5; 
    int max, min;
    float med = 0;

    cin >> N >> max;

    min = max; 

    for (int i = 1; i < N; i++){
        int temp; 
        cin >> temp;
        if (temp > max){
            max = temp;
        }
        else if (temp < min){
            min = temp;
        }
        med += temp;
    }

    med /= N;
    cout << "min: " << min <<endl;
    cout << "max: " << max <<endl;
    cout << "med: " << med <<endl;
    
    return 0;
}