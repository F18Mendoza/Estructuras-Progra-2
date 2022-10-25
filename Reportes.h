#ifndef REPORTES_H
#define REPORTES_H

#include <iostream>
#include "ReportePasillos.h"

using namespace std;

class Reportes {
	
	private:
		
		ReportePasillos *pasillos;
		
	public:
		
		Reportes () {pasillos = NULL;}
		
		int pasillosVisitadosMax();
		int pasillosVisitadosMin();
		int pasillosContarVisitados(int pVisitas);
		void agregarPasillo(int pCodigo);
		void pasillosMostrarVisitados(int pVisitas, bool menos);
		void pasillosVisitar(int pCodigo);
};

#endif
