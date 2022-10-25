#ifndef NODODC_H
#define NODODC_H

#include <iostream>


class NodoDC {

	private:
		int visitadas;
        int codPasillo;
        std::string nombre;
        NodoDC *siguiente;
        NodoDC *anterior;

    public:        
        NodoDC(int pcodPasillo, std::string pNombre, int pVisitadas) {

            nombre = pNombre;
            codPasillo = pcodPasillo;
            visitadas = pVisitadas;
            siguiente = NULL;
            anterior = NULL;
        }
        
        NodoDC(int pcodPasillo, std::string pNombre, int pVisitadas, NodoDC *sigNodo) {

            nombre = pNombre;
            codPasillo = pcodPasillo;
            visitadas = pVisitadas;
            siguiente = sigNodo;
        }

    friend class ListaDC;
};

#endif
