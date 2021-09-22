#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void printExit(){
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
}

int main(){
	int N = 15;
	string names[15] = {"Omar","Miguel","Sebastian","Brandon","Hector","Diego","Carlos","Gabriel","Tijash","Eduardo","Yahwthani","Felipe","Renata","Alexi","Daniel"};
	string lastnames[15] = {"Rodriguez", "Velez", "Avilez", "Magana", "Eguiarte", "Jimenez", "Lopez", "Guerra", "Salamanca", "Martinez", "Morales", "Organista", "Calderon", "Ortiz", "Esparza"};
	string month[15] = {"01","02","02","02","03","03","06","06","06","09","09","09","11","11","12"};
	string day[15] = {"13","08","20","27","07","13","05","26","30","12","17","20","18","29","17"};
	string found = "\033[92m", error = "\033[31m", neutral = "\033[37m", warning = "\033[93m";

	string filter = "";
	string query = "";
	int results = 0;

	do{
		cin >> filter;
		if (filter == "exit" || filter == "quit"){
			break;
		}
		cin >> query;
		results = 0;
		for(int i = 0; i < N; i++){
			if(filter == "all" && query == "all"){
				cout << found << " " << names[i] << " " << lastnames[i] << " " << day[i] << "/" << month[i] << neutral << endl;
				results++;
			}
			if (filter == "month" || filter == "Month"){
				if(month[i] == query){
					cout << found << " " << names[i] << " " << lastnames[i] << " " << day[i] << "/" << month[i] << neutral << endl;
					results++;
				}
			}
			if (filter == "date" || filter == "Date"){
				string date = day[i] + "/" + month[i];
				if(date == query){
					cout << found << " " << names[i] << " " << lastnames[i] << " " << day[i] << "/" << month[i] << neutral << endl;
					results++;
				}
			}
			if (filter == "name" || filter == "Name"){
				if(names[i] == query){
					cout << found << " " << names[i] << " " << lastnames[i] << " " << day[i] << "/" << month[i] << neutral << endl;
					results++;
				}
			}
			if (filter == "lastname" || filter == "LastName" || filter == "Lastname"){
				if(lastnames[i] == query){
					cout << found << " " << names[i] << " " << lastnames[i] << " " << day[i] << "/" << month[i] << neutral << endl;
					results++;
				}

			}
			if (filter == "fullname" || filter == "FullName" || filter == "Fullname"){
				string fullname = names[i] + "_" + lastnames[i];
				if(fullname == query){
					cout << found << " " << names[i] << " " << lastnames[i] << " " << day[i] << "/" << month[i] << neutral << endl;
					results++;
				}
			}
		}
		if(results){
			cout << warning << results << " items found" << endl;
		}
		else{
			cout << error << results << " items found" << endl;
		}
		cout << neutral;
	}while(filter != "null");

	cin.get();
	printExit();
	return 0;
}
