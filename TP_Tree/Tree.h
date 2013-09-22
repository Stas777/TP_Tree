#pragma once

class Apple {
	int seeds;					// количество семечек в яблоке

public:
	Apple();					// конструктор
	int getSeeds();
};


class Tree {
	float height;				// высота в метрах
	float age;					// возраст в годах
	int flowers;				// количество цветов на дереве
	int amount;					// количество яблок на дереве
	Apple *apples;

public:
	Tree(float, float);			// конструктор
	int grown();
	int shake();
	int getAmount();
	int seedsAmount();
	int flower();
};