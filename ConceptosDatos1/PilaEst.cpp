#include "PilaEst.h"

PilaEst::PilaEst()
{}


PilaEst::~PilaEst()
{
}

bool PilaEst::encolar(int pdato)
{
	if (getFinal() != 9)
	{
	
		if (!vacia()) {
			datos[getFrente() + 1] = pdato;
			setFrente(getFrente() + 1);

		}else{
			datos[getFinal()] = pdato;
			setFinal(getFinal() + 1);
			
		}
		return true;
	}
	else
	{
		return false;
	}
}

int PilaEst::desencolar()
{
	int dato;
	if (getFrente() < 0) {
		return NULL;
	}
	else {
		dato = datos[getFrente()];
		setFrente(getFrente() - 1);
		return dato;
	}
}

int PilaEst::datoFrente()
{
	return datos[getFrente()];
}


void PilaEst::mostrar()
{
	if (getFrente() >= 0)
	{
		for (int i = getFrente(); i >= 0; i--)
		{
			cout << "Pila [" << i << "] :" << datos[i] << endl;
		}
	}
	else
	{
		cout << "Pila vacia!!!" << endl;
	}
}

