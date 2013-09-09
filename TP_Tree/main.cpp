#include <iostream>
#include "Tree.h"

using namespace std;

int main() {
	Tree t1(1.5, 3);

	int g = t1.grown();
	cout << "Grown " << g << endl;
		
	return 0;
}