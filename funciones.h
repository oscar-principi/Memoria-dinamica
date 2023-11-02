#pragma once

void cargarVectorEstatico(int* vectorEstatico, const int& TAMANIO);
void mostrarVectorEstatico(int* vectorEstatico, const int& TAMANIO);

void cargarVectorDinamico(int* vectorDinamico, const int& TAMANIO);
void cargarVectorDinamicoAux(int* vectorDinamicoAux, const int& TAMANIO_VECTOR, const int& TAMANIO_VECTOR_AUX);
void mostrarVectorDinamico(int* vectorDinamico, const int& TAMANIO);
void copiarVector(int* vectorDinamico, int* vectorDinamicoAux, const int& TAMANIO_VECTOR, const int& TAMANIO_VECTOR_AUX);