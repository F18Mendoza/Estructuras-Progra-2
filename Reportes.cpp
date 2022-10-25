#include <iostream>
#include "Reportes.h"

using namespace std;

int Reportes::pasillosContarVisitados(int pVisitas) {
	
	int cont = 0;
	ReportePasillos *temp = pasillos;
	while (temp != NULL) {
		if (temp -> contador == pVisitas) {
			cont++;
		}
		temp = temp -> siguiente;
	}
	return cont;
}

int Reportes::pasillosVisitadosMax() {
	
	ReportePasillos *temp = pasillos;
	int max = temp -> contador;
	while (temp != NULL) {
		if (max < temp -> contador) {
			max = temp -> contador;
		}
		temp = temp -> siguiente;
	}
	return max;
}

int Reportes::pasillosVisitadosMin() {
	
	ReportePasillos *temp = pasillos;
	int min = temp -> contador;
	while (temp != NULL) {
		if (min > temp -> contador) {
			min = temp -> contador;
		}
		temp = temp -> siguiente;
	}
	return min;
}

void Reportes::agregarPasillo(int pCodigo) {
	
	if (pasillos == NULL) {
		pasillos = new ReportePasillos(pCodigo);
	} else {
		ReportePasillos *temp = pasillos;
		while (temp -> siguiente != NULL) {
			temp = temp -> siguiente;
		}
		temp -> siguiente = new ReportePasillos(pCodigo);
	}
}

void Reportes::pasillosMostrarVisitados(int pVisitas, bool menos) {
	
	if (pasillosContarVisitados(pVisitas) > 1) {
		if (menos) {
			cout << "Los pasillos menos visitados son:" << endl;
			ReportePasillos *temp = pasillos;
			while (temp != NULL) {
				if (temp -> contador == pVisitas) {
					cout << "Codigo de pasillo: " << temp -> codigo << endl;
				}
				temp = temp -> siguiente;
			}
		} else {
			cout << "Los pasillos mas visitados son:" << endl;
			ReportePasillos *temp = pasillos;
			while (temp != NULL) {
				if (temp -> contador == pVisitas) {
					cout << "Codigo de pasillo: " << temp -> codigo << endl;
				}
				temp = temp -> siguiente;
			}
		}
	} else {
		if (menos) {
			cout << "El pasillo menos visitado es:" << endl;
			ReportePasillos *temp = pasillos;
			while (temp != NULL) {
				if (temp -> contador == pVisitas) {
					cout << "Codigo de pasillo: " << temp -> codigo << endl;
				}
				temp = temp -> siguiente;
			}
		} else {
			cout << "El pasillo mas visitado es:" << endl;
			ReportePasillos *temp = pasillos;
			while (temp != NULL) {
				if (temp -> contador == pVisitas) {
					cout << "Codigo de pasillo: " << temp -> codigo << endl;
				}
				temp = temp -> siguiente;
			}
		}
	}
}

void Reportes::pasillosVisitar(int pCodigo) {
	
	if (pasillos -> codigo == pCodigo) {
		pasillos -> contador++;
	} else {
		ReportePasillos *temp = pasillos;
		while (temp -> codigo != pCodigo) {
			temp = temp -> siguiente;
		}
		temp -> contador++;
	}
}
