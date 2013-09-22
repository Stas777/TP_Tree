#include <iostream>
#include "Tree.h"
#include <time.h> 

using namespace std;

int main() {
	
	srand(time(NULL));

	Tree t1(1.5, 3);

	int c = t1.flower();
	cout << "There are " << c <<" flower(s) on the tree" << endl;

	int g = t1.grown();
	cout << "Grown " << g << " apple(s)" << endl;

	cout << "Total ammount of seeds = " << t1.seedsAmount() << endl;

	int s;
	do {
		s = t1.shake();
		cout << "Dropped " << s << " apple(s)" << endl;
	} while (t1.getAmount() > 0);
		
	return 0;
}