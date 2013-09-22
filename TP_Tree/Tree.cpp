#include <stdlib.h>
#include "Tree.h"


Tree::Tree(float h, float a){
	height = h;
	age = a;
	amount = 0;
}

int Tree::grown() {
	amount = rand()%101;
	return amount;
};

int Tree::shake() {
	int i = rand()%(amount+1);
	amount = amount - i;
	return i;
};

int Tree::getAmount(){
	return amount;
					  };

int Apple::seeds_ammount() {
	seeds = rand()%21;
	return seeds;
};