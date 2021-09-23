#include<iostream>

using namespace std;

int main(){
  int N = 4;
  int array2D[N][N];

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
     if(i == j){
       array2D[j][i] = 0;
     }else{
       array2D[j][i] = (j+i) + (i * N);
     }
     cout << array2D[j][i] << "\t";
    }
    cout << endl;
  }

  int posX, posY;
  cin >> posX >>  posY;
  cin >> array2D[posX][posY];
  for (int i =0; i < N; i++){
    int sum = 0;
    for (int j = 0; j < N; j++){
      cout << array2D[j][i] << "\t";
      sum += array2D[j][i];
    }
    cout << "= " << sum << endl;
  }
  return 0;
}
