#pragma once
#include "stdafx.h"

class Estructura
{
	int frente;
	int final;

public:
	Estructura();
	~Estructura();

	int getFrente();
	void setFrente(int);

	int getFinal();
	void setFinal(int);

	bool vacia();
	int getLargo();
};

