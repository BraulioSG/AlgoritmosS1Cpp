#include <iostream>

using namespace std;

int main() {
    int factor = 0;
	int cant = 0;
	int res = 1;
	cin >> factor >> cant;

	for (int i = 1; i <= cant; i++){
		res = res * factor;
	}

	cout << res;
}
