#pragma once

class Tree {
	float height;				// ������ � ������
	float age;					// ������� � �����
	int amount;					// ���������� ����� �� ������

public:
	Tree(float, float);			// �����������
	int grown();
	int shake();
	int getAmount();
};

class Apple {
	int seeds;					// ���������� ������� � ������

public:
	int seeds_ammount();
};