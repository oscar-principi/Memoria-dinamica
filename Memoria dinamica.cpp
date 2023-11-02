#include <iostream>
#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{

	//Memoria estatica - No se puede modificar el tamanio del vector declarado en tiempo de compilacion, en el tiempo de ejecucion. Es fijo.
	const int TAMANIO = 10;
	int vectorEstatico[TAMANIO];

	cout << "------------------------------------------" << endl;
	cout << "Vector estatico de 10 espacios de memoria:" << endl;
	cout << "------------------------------------------" << endl << endl;

	cargarVectorEstatico(vectorEstatico, TAMANIO);
	mostrarVectorEstatico(vectorEstatico, TAMANIO);



	//Memoria dinamica A- Si se puede cambiar el tamanio del vector declarado en tiempo de compilacion, en el tiempo de ejecucion. Es dinamico.
	int* vectorDinamico;
	int tamanio;

	cout << endl<<"-------------------------------------------------------------------" << endl;
	cout << "Vector dinamico de N espacios de memoria asigandos por el usuario: " << endl;
	cout << "-------------------------------------------------------------------" << endl << endl;
	cout << "Ingrese el tamanio del vector: ";
	cin >> tamanio;
	
	cout << endl;

	vectorDinamico = new int[tamanio];
	if (vectorDinamico == nullptr) {
		cout << "No se pudo asignar memoria." << endl;
	}
	else {
		cargarVectorDinamico(vectorDinamico, tamanio);
		mostrarVectorDinamico(vectorDinamico, tamanio);

		//delete vectorDinamico; 
	}


	//Memoria dinamica B- Si se puede cambiar el tamanio actual del vector declarado en tiempo de compilacion anteriormente, en el tiempo de ejecucion. Es dinamico.
	int* vectorDinamicoAux;
	int tamanioAux;

	cout << endl << "-----------------------------------------------------------------------------------------" << endl;
	cout << "Incremento del vector dinamico anterior de N espacios de memoria asigandos por el usuario: " << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl << endl;
	cout << "Ingrese el tamanio en cuanto quiere incrementar el vector: ";
	cin >> tamanioAux;

	cout << endl;

	vectorDinamicoAux = new int[tamanio + tamanioAux];
	if (vectorDinamicoAux == nullptr) {
		cout << "No se pudo asignar memoria." << endl;
	}
	else {
		copiarVector(vectorDinamico, vectorDinamicoAux, tamanio, tamanioAux);
		cargarVectorDinamicoAux(vectorDinamicoAux, tamanio, tamanioAux);
		mostrarVectorDinamico(vectorDinamicoAux, tamanio + tamanioAux);
		delete vectorDinamico, vectorDinamicoAux;
	}



	cout << "-----------------------------------------------------------------------------------------" << endl << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl << endl;
}