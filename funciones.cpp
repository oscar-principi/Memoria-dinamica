#include "funciones.h"
#include <iostream>

void cargarVectorEstatico(int* vectorEstatico, const int& TAMANIO) {
	for (int i = 0; i < TAMANIO; i++) {
		vectorEstatico[i] = i + 1;
	}
}
void mostrarVectorEstatico(int* vectorEstatico, const int& TAMANIO) {
	for (int i = 0; i < TAMANIO; i++) {
		std::cout << "Posicion: " << vectorEstatico[i] << std::endl;
	}
}


void cargarVectorDinamico(int* vectorDinamico, const int& TAMANIO) {
	for (int i = 0; i < TAMANIO; i++) {
		vectorDinamico[i] = i + 1;
	}
}
void cargarVectorDinamicoAux(int* vectorDinamicoAux, const int& TAMANIO_VECTOR, const int& TAMANIO_VECTOR_AUX) {
	for (int i = TAMANIO_VECTOR; i < TAMANIO_VECTOR_AUX; i++) {
		vectorDinamicoAux[i] = i + 1;
	}
}
void mostrarVectorDinamico(int* vectorDinamico, const int& TAMANIO) {
	for (int i = 0; i < TAMANIO; i++) {
		std::cout << "Posicion: " << vectorDinamico[i]<< std::endl;
	}
}
void copiarVector(int* vectorDinamico, int* vectorDinamicoAux, const int& TAMANIO_VECTOR, const int& TAMANIO_VECTOR_AUX) {
	for (int i = 0; i < TAMANIO_VECTOR; i++) {
		vectorDinamicoAux[i] = vectorDinamico[i];
	}
	for (int i = TAMANIO_VECTOR; i < TAMANIO_VECTOR + TAMANIO_VECTOR_AUX; i++) {
		vectorDinamicoAux[i] = i+1;
	}
}