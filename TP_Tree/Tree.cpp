#include <stdlib.h>
#include "Tree.h"


Tree::Tree(float h, float a){
	height = h;
	age = a;
	amount = 0;
}

int Tree::grown() {
	amount = rand()%101;
	apples = new Apple[amount];
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

int Tree::seedsAmount(){
	int s=0;
	int i;
	for(i=0; i<amount; i++){
		s+=apples[i].getSeeds();
	}
	return s;
};

int Apple::getSeeds() {
	return seeds;
};

Apple::Apple(){
	seeds = rand()%21;
};