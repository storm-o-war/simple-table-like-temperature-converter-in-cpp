#include <iostream>
#include <sys/types.h>
#include <limits>

using std::cout;

//
unsigned int selectedOption = 0;
int startTemp{}, endTemp{};
// GLOBAL VARIABLES!!!!!!



void CtoF(float x) {
    cout << (x * 9.0 / 5.0) + 32 << '\n';
}

void FtoC(float x) {
    cout << (x - 32) * 5.0 / 9.0 << '\n';
}

void CtoK(float x) {
    cout << x + 273.15 << '\n';
}

void KtoC(float x) {
    cout << x - 273.15 << '\n';
}

void FtoK(float x) {
    cout << (x - 32) * 5.0 / 9.0 + 273.15 << '\n';
}

void KtoF(float x) {
    cout << (x - 273.15) * 9.0 / 5.0 + 32 << '\n';
}


inline void loop(const  int &start,const int &end,  void(*converter)(float x)){
	for(int i = start; i <= end; i++){
		converter(i);
	}
}


inline void optionValid(){
	switch (selectedOption) {
		case 1:
			loop(startTemp, endTemp, CtoF);
			break;

		case 2:
			loop(startTemp, endTemp, FtoC);
			break;

		case 3:
			loop(startTemp, endTemp, CtoK);
			break;

		case 4:
			loop(startTemp, endTemp, KtoC);
			break;

		case 5:
			loop(startTemp, endTemp, KtoF);
			break;

		case 6:
			loop(startTemp, endTemp, FtoK);
			break;

		default:
			cout << "Invalid option!\n";
			break;
	}
}	


inline void get_range(int &x, int &y){
	bool success = false;
	while(!success){
		std::cout << "start: "; std::cin >> x; std::cout << '\n';

		if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input!\n";
            continue;
        }

		std::cout << "end: "; std::cin >> y; std::cout << '\n';

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input!\n";
            continue;
        }
	
        if (x >= y) {
            cout << "Invalid range!\n";
            continue;
        }

		success = true;
	}
};

inline void showManu(){
	cout << "    Option[1-6]\n1. C ->F   2. F ->C\n3. C ->K   4. K ->C\n5. K ->F   6. F ->K" << std::endl;
	std::cin >> selectedOption;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        selectedOption = 0;
        cout << "Invalid input!\n";
    }

}



int main(){

	bool optinoConditino = false;

	while(!optinoConditino){
		showManu();
		
		if(selectedOption >= 1 && selectedOption <= 6){
			optinoConditino = true;
		}else {
			std::cout << "range ERROR\n\n";
		}
	}

	get_range(startTemp, endTemp);

	optionValid();

	return 0;
}
