#include<iostream>

using namespace std;

int main(){
	int num, h=0, l=0;
	int higher[10];
	int lower[10];

	while(h < 10 && l <10){
		cin >> num;
		if(num > 100){
			cout << "only numbers below 100" << endl;
		}
		else{
			if(num <=50){
				lower[l] = num;
				l++;
			}
			else{
				higher[h] = num;
				h++;
			}
		}
	}

	int lowerAverage = 0, higherAverage = 0;
	for(int i =0; i < l; i++){
		cout << "\033[92mmenor: " << lower[i]<<endl;
		lowerAverage += lower[i];
	}
	lowerAverage = lowerAverage / l;
	for(int i =0; i < h; i++){
		cout << "\033[93mmayor: " << higher[i]<<endl;
		higherAverage += higher[i];
	}
	higherAverage = higherAverage / h;
	cout << "\033[36mlower average: " << lowerAverage << endl;
	cout << "\033[36mhigherAverage: " << higherAverage << endl;
	return 0;
}
