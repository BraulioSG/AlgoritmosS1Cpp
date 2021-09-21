#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	srand(time(NULL));
	int arr[30];
	int N = 30, idx = 0, lower =0;
	float higher = 0;

	for(int i = 0; i < N; i++){
		arr[i] = rand() % 100 + 1;
		if (arr[i] > 50){
			higher += arr[i];
			idx++;
		}
		else if(arr[i] < 30){
			lower += arr[i];
		}
	}

	higher = higher / idx;
	cout << "\033[1m\033[93mthe sum of the numbers lower than 30: " <<lower << endl;
	cout << "\033[36mthe average of the numbers higher than 50: " << higher << endl;
	cin.get();
	cout << "\033[92m                     @@@@@@@@             \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[92m                    @@@@@@@@@@            \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[92m                   @@@@@@@@@@@@           \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[92m                   @@@@@@@@@@@@           \033[36m [I]############[I]" << endl;
    cout << "\033[92m                    @@@@@@@@@             \033[36m [I]   END OF   [I]" << endl;
    cout << "\033[92m                     @@@@@@@              \033[36m [I]     THE    [I]" << endl;
    cout << "\033[37m         &&&&&&&&&&&%%%%%$$          %%%% \033[36m [I]   PROGRAM  [I]" << endl;
    cout << "\033[37m        &&&&&&&&&&&%%%%%$$$$        %%%%  \033[36m [I]############[I]" << endl;
    cout << "\033[37m       %%%%       %%%%%  $$$$      %%%%   \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[37m      %%%%       %%%%%    $$$$    %%%%    \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[37m     %%%%       %%%%%      $$$$  %%%%     \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[37m    %%%%       %%%%%        $$$$%%%%      \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[31m              %%%% $$$$                   \033[36m [I]%%%%%%%%|\\%%[I]" << endl;
    cout << "\033[31m             %%%%   $$$$                  \033[36m [I]%|        \\%[I]" << endl;
    cout << "\033[31m            %%%%     $$$$                 \033[36m [I]%|        /%[I]" << endl;
    cout << "\033[31m           %%%%       $$$$                \033[36m [I]%%%%%%%%|/%%[I]" << endl;
    cout << "\033[31m  &&&&&&&&&&&&         $$$$               \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[31m &BRAULIO&SG&           $$$$              \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[31m                        &&&&              \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[31m                        &&&&              \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[31m                        &&&&              \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[31m                        &&&&              \033[36m [I]%%%%%%%%%%%%[I]" << endl;
    cout << "\033[31m                        &&&&              \033[36m [I]%%%%%%%%%%%%[I]" << endl;
	return 0;
}
