// Fill out your copyright notice in the Description page of Project Settings.


#include "Main.h"
#include <iostream>
#include <conio.h>
	using namespace std;

Main::Main()
{

		char respuesta;
		do {
			cout << "Sis-457" << endl;
			cout << "Nombre: Marlon Alexander Morodias Bohorquez" << endl;
			cout << "Numero: 61891740" << endl << "CI: 8534011" << endl << "CU: 35-4267" << endl;
			cout << "Presione r para volver a imprimir los datos o cualquier tecla para cerrar el programa" << endl;
			respuesta = _getch();
		} while (respuesta == 'r');
}

Main::~Main()
{
}
