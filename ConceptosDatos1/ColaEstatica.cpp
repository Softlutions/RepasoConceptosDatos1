#include "ColaEstatica.h"

ColaEstatica::ColaEstatica()
{}


ColaEstatica::~ColaEstatica()
{
}

bool ColaEstatica::encolar(int pdato)
{
	if (getFinal() != 9)
	{
		datos[getFinal()] = pdato;
		setFinal(getFinal() + 1);
		return true;
	}
	else
	{
		return false;
	}
}

int ColaEstatica::desencolar()
{
	int dato;

	if (!vacia())
	{
		dato = datos[getFrente()];
		setFrente(getFrente() + 1);
	}

	return dato;
}

int ColaEstatica::datoFrente()
{
	return datos[getFrente()];
}

bool Estructura::vacia()
{
	return	getFrente() == getFinal();
}

void ColaEstatica::mostrar()
{
	if (!vacia())
	{
		for (size_t i = getFrente(); i < getFinal(); i++)
		{
			cout << "Valor: " << datos[i] << "\n" << "\n";
		}
	}
	else {
		cout << "La cola se encuentra vacia." << "\n" << "\n";
	}
}

