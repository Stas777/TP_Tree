#pragma once

class Apple {
	int seeds;					// ���������� ������� � ������

public:
	Apple();					// �����������
	int getSeeds();
};


class Tree {
	float height;				// ������ � ������
	float age;					// ������� � �����
	int flowers;				// ���������� ������ �� ������
	int amount;					// ���������� ����� �� ������
	Apple *apples;

public:
	Tree(float, float);			// �����������
	int grown();
	int shake();
	int getAmount();
	int seedsAmount();
	int flower();
};