#include <iostream>

using namespace std;

int main() {
	int a = 7;
		for (int x = 0; x < a; ++x){
			for (int y = 0; y < x; ++y){
		cout << " ";
	}
	for (int z=0; z<a-x;++z){
	if ((x+z)%2==0){
		cout << "#";
	}
	else {
		cout << "@";
		}
	}
	cout << endl;
		}
	return 0;
}
	