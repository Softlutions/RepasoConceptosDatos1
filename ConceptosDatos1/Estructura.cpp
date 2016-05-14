#include "Estructura.h"

Estructura::Estructura()
{
	setFrente(0);
	setFinal(0);
}

Estructura::~Estructura(){}

int Estructura::getFrente()
{
	return frente;
}

void Estructura::setFrente(int pfrente)
{
	frente = pfrente;
}

int Estructura::getFinal()
{
	return final;
}

void Estructura::setFinal(int pfinal)
{
	final = pfinal;
}