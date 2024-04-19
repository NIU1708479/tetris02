#include <iostream>
#include <fstream>
#include <sstream>
#include "clase_figura.h"

using namespace std;

void Figura::inicialitza() {
    //posicion y forma inicial
}

void Figura::giraFigura() {
    // gira figura
}

void Figura::mouFigura(int direccio) {
    // mueve figura dcha o izq
}

void Figura::baixaFigura() {
    // baja la figura
}

void Figura::dibuixaFigura() const {
    // pone la figura en el tablero
}

bool Figura::colisiona(const vector<vector<int>>& tauler) const {
    // comprueba si hay colisiones
    return false;
}
