#pragma once

class Tree {
	float height;				// высота в метрах
	float age;					// возраст в годах
	int amount;					// количество яблок на дереве

public:
	Tree(float, float);
	int grown();
	int shake();
};

class Apple {
	int seeds;					// количество семечек в яблоке

public:
	int seeds_ammount();
};