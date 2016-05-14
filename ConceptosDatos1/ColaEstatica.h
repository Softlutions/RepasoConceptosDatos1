#pragma once
#include "stdafx.h"
#include "Estructura.h"

class ColaEstatica : public Estructura
{
	int datos[10];

private:

public:
	ColaEstatica();
	~ColaEstatica();

	bool encolar(int);
	int desencolar();
	int datoFrente();
	void mostrar();

};