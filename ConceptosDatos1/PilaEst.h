#pragma once
#include "stdafx.h"
#include "Estructura.h"

class PilaEst : public Estructura
{
	int datos[10];

private:

public:
	PilaEst();
	~PilaEst();

	bool encolar(int);
	int desencolar();
	int datoFrente();
	void mostrar();

};