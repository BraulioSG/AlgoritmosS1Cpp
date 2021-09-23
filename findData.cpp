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
	int N = 17;
	string names[N] = {"Omar","Miguel","Sebastian","Brandon","Hector","Diego", "Miguel","Carlos","Gabriel","Tijash","Eduardo","Yahwthani","Felipe","Renata","Alexi", "Gabriel","Daniel"};
	string lastnames[N] = {"Rodriguez", "Velez", "Avilez", "Magana", "Eguiarte", "Jimenez", "Herrera", "Lopez", "Guerra", "Salamanca", "Martinez", "Morales", "Organista", "Calderon", "Ortiz", "Torres", "Esparza"};
	string month[N] = {"01","02","02","02","03","03", "03","06","06","06","09","09","09","11","11", "12","12"};
	string day[N] = {"13","08","20","27","07","13", "15","05","26","30","12","17","20","18","29", "15","17"};
	string found = "\033[92m", error = "\033[31m", neutral = "\033[37m", warning = "\033[93m", cyan = "\033[36m";

	string filter = "";
	string query = "";
	int results = 0;

	cout << neutral << "if you are new, you should try typing \"help usage\"" << endl;
	do{
		cout << "\033[35m" << "$" << neutral;cin >> filter;
		if (filter == "exit" || filter == "quit"){
			break;
		}
		cin >> query;
		results = 0;
		if(filter == "all" || filter == "month" || filter == "date" || filter == "name" || filter == "lastname" || filter == "fullname"){
			for(int i = 0; i < N; i++){
				if(filter == "all" && query == "all"){
					cout << i + 1<< "->"<< found << " " << names[i] << " " << lastnames[i] << " " << day[i] << "/" << month[i] << neutral << endl;
					cout << "-----------------------------------------------" << endl;
					results++;
				}
				else if (filter == "month"){
					if(month[i] == query){
						results++;
						cout << results<< "->" << found << " " << names[i] << " " << lastnames[i] << " " << day[i] << "/" << month[i] << neutral << endl;
						cout << "-----------------------------------------------" << endl;

					}
				}
				else if (filter == "date"){
					string date = day[i] + "/" + month[i];
					if(date == query){
						results++;
						cout << results<< "->" << found << " " << names[i] << " " << lastnames[i] << " " << day[i] << "/" << month[i] << neutral << endl;
						cout << "-----------------------------------------------" << endl;

					}
				}
				else if (filter == "name"){
					if(names[i] == query){
						results++;
						cout << results<< "->" << found << " " << names[i] << " " << lastnames[i] << " " << day[i] << "/" << month[i] << neutral << endl;
						cout << "-----------------------------------------------" << endl;

					}
				}
				else if (filter == "lastname"){
					if(lastnames[i] == query){
						results++;
						cout << results<< "->" << found << " " << names[i] << " " << lastnames[i] << " " << day[i] << "/" << month[i] << neutral << endl;
						cout << "-----------------------------------------------" << endl;

					}

				}
				else if (filter == "fullname"){
					string fullname = names[i] + "_" + lastnames[i];
					if(fullname == query){
						cout << i + 1<< "->" << found << " " << names[i] << " " << lastnames[i] << " " << day[i] << "/" << month[i] << neutral << endl;
						cout << "-----------------------------------------------" << endl;
						results++;
					}
				}
				else{
					cout << error << "FATAL ERROR";
				}
			}
			if(results){
				cout << warning << results << " items found for the " << filter << " " << query << endl;
			}
			else{
				cout << error << results << " items found for the " << filter << " " << query << endl;
			}
		}
		else if (filter == "help"){
			cout << cyan << "to use this program, you need to type one of the following commands (filter, query):" << endl;
			cout << cyan << "  | filter |        query       |       example         |"<< endl;
			cout << cyan << "---------------------------------------------------------"<< endl;
			cout << cyan << "->|all     | all                | all all               |"<< endl;
			cout << cyan << "->|month   | mm                 | month 06              |"<< endl;
			cout << cyan << "->|name    | firstName          | name John             |"<< endl;
			cout << cyan << "->|lastname| lastName           | lastname Johnson      |"<< endl;
			cout << cyan << "->|fullname| firstName_lastName | fullname John_Johnson |"<< endl;
			cout << cyan << "---------------------------------------------------------"<< endl;
			cout << warning << "-> quit/exit ends the program" << endl;
			cout << neutral;
		}
		else{
			cout << error << "\""<< filter << "\" is an un-recognized command, try \"help commands\"" << endl;
		}
		cout << neutral;
	}while(filter != "null");

	printExit();
	return 0;
}
