// ConceptosDatos1.cpp : Defines the entry point for the console application.
//

#include "ConceptosDatos1.h"
#include "stdafx.h"
#include "ColaEstatica.h"

ColaEstatica *cola;

int main()
{
	cola = new ColaEstatica();
	mostrarMenu();

	return 0;
}

void mostrarMenu()
{
	cout << "--  Bienvenido  --" << "\n" <<
		"Digite la estructura que desea utilizar: " << "\n" <<
		"1- Cola estatica." << "\n" <<
		"2- Pila." << "\n" <<
		"3- Lista." << "\n" <<
		"4- Salir." << "\n";
	procesarOpcion();
}

void procesarOpcion()
{
	int opcion;
	cin >> opcion;

	switch (opcion)
	{
	case 1: mostrarMenuCola();
		break;
	case 2: mostrarMenuPila();
		break;
	case 3: mostrarMenuLista();
		break;
	case 4: system("pause");
		break;
	default: cout << "Opcion incorrecta." << "\n" << "\n"; mostrarMenu();
		break;
	}
}

// COLA

void mostrarMenuCola()
{
	cout << "--  Bienvenido a la cola estatica  --" << "\n" <<
		"Inserte la opcion que desea realizar: " << "\n" <<
		"1- Encolar." << "\n" <<
		"2- Desencolar." << "\n" <<
		"3- Mostrar todos los datos." << "\n" <<
		"4- Ver cuantos datos se pueden guardar en la cola" << "\n" <<
		"5- Regresar al menu principal." << "\n";
	procesarOpcionCola();
}

void procesarOpcionCola()
{
	int opcion;
	cin >> opcion;

	switch (opcion)
	{
	case 1: encolar(); mostrarMenuCola();
		break;
	case 2: desencolar(); mostrarMenuCola();
		break;
	case 3: mostrarCola(); mostrarMenuCola();
		break;
	case 4: cout << "Se puede ingresar un maximo de 10 datos." << "\n" << "\n"; mostrarMenuCola();
		break;
	case 5: mostrarMenu();
		break;
	default: cout << "Opcion incorrecta." << "\n" << "\n"; mostrarMenuCola();
		break;
	}
}

void desencolar()
{
	cout << "El dato que acaba de quitar es: " << cola->desencolar() << "\n" << "\n";
}

void encolar()
{
	int dato;

	cout << "Ingrese el dato que desea agregar: " << "\n" << "\n";
	cin >> dato;

	if (!cola->encolar(dato))
	{
		cout << "Llego a su maximo la cantidad de datos almacenables, por lo tanto no se guardo el ultimo dato." << "\n" << "\n";
	}
	else
	{
		cout << "Dato agregado con exito." << "\n" << "\n";
	}
}

void mostrarCola()
{
	cola->mostrar();
}


// PILA

void mostrarMenuPila()
{
	cout << "--  Bienvenido a la pila  --" << "\n" <<
		"Inserte la opcion que desea realizar: " << "\n" <<
		"1- Encolar." << "\n" <<
		"2- Desencolar." << "\n" <<
		"3- Mostrar todos los datos." << "\n" <<
		"4- Regresar al menu principal." << "\n";
	procesarOpcionPila();
}

void procesarOpcionPila()
{
	int opcion;
	cin >> opcion;

	switch (opcion)
	{
	case 1: push(); mostrarMenuPila();
		break;
	case 2: pop(); mostrarMenuPila();
		break;
	case 3: mostrarPila(); mostrarMenuPila();
		break;
	case 4: mostrarMenu();
		break;
	default: cout << "Opción incorrecta." << "\n" << "\n"; mostrarMenuPila();
		break;
	}
}

void push()
{

}

void pop()
{

}

void mostrarPila()
{

}

// LISTA

void mostrarMenuLista()
{
	cout << "--  Bienvenido a la lista  --" << "\n" <<
		"Inserte la opcion que desea realizar: " << "\n" <<
		"1- Insertar." << "\n" <<
		"2- Borrar." << "\n" <<
		"3- Mostrar todos los datos." << "\n" <<
		"4- Regresar al menu principal." << "\n";
	procesarOpcionLista();
}

void procesarOpcionLista()
{
	int opcion;
	cin >> opcion;

	switch (opcion)
	{
	case 1: insertar(); mostrarMenuLista();
		break;
	case 2: borrar(); mostrarMenuLista();
		break;
	case 3: mostrarLista(); mostrarMenuLista();
		break;
	case 4: mostrarMenu();
		break;
	default: cout << "Opción incorrecta." << "\n" << "\n"; mostrarMenuLista();
		break;
	}
}

void insertar()
{

}

void borrar()
{

}

void mostrarLista()
{

}