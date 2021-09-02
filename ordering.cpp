#include <iostream>
using namespace std;

int main() {
    int nums[5];
	int arrSize = sizeof(nums)/sizeof(nums[0]);

	for(int i = 0; i < arrSize; i++){
		cin >> nums[i];
	}

	for (int j = 1; j < arrSize; j++){
		for (int h = 1; h < arrSize; h++){
			if (nums[h] > nums[h -1]){
				int temp = nums[h];
				nums[h] = nums[h - 1];
				nums[h - 1] = temp;
			}
		}
	}

	for (int x = 0; x < arrSize; x++){ 
		cout << nums[x] << endl;
	}
	
    return 0;
}
