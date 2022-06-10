#pragma once
#include <iostream>
using namespace std;

class Info
{
protected:

	int monphai;
	int level;
	float damage;
	char name[20];


public:


	virtual void input();
	virtual void output();
	virtual float setDamage();
	virtual int setMonphai();


};

class Character :public Info
{
public:

	void input();
	void output();
	float setDamage();
	int setMonphai();
};

class BigMonster :public Info
{
public:

	void input();
	void output();
	float setDamage();
	int setMonphai();
};

class SmallMonster :public Info
{
public:

	void input();
	void output();
	float setDamage();
	int setMonphai();
};

