#include <iostream>	

using namespace std;

int main() {
	int x = 7;
	for (int a = 0; a < x; a++) {
		for (int b = 0; b < a; b++){
			cout << "  ";
}
	for (int c = 0; c <x - a; c++) {
		if (a % 2 ==0){
			cout << (c % 2 == 0? " @" : " #");
	} 
			else{
				cout << (c % 2 == 0? " #" : " $");
			}
		}
	cout << endl;
	}
return 0;
}