#include <iostream>
#include "Tree.h"

using namespace std;

int main() {
	Tree t1(1.5, 3);

	int g = t1.grown();
	cout << "Grown " << g << endl;

	int s;
	do {
		s = t1.shake();
		cout << "Dropped " << s << endl;
	} while (s > 0);

	int shake();
		
	return 0;
}