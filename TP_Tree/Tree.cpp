#include <stdlib.h>
#include "Tree.h"

Tree::Tree(float h, float a){
	height = h;
	age = a;
	amount = 0;
}

int Tree::grown() {
	amount = rand()%100;
	return amount;
};

int Tree::shake() {
	int i = rand()%amount;
	amount = amount - i;
	return i;
};

int Apple::seeds_ammount() {
	seeds = rand()%20;
	return seeds;
};