#include <iostream>
#include <fstream>
#include <sstream>
#include "clase_tauler.h"
using namespace std;

void Tauler::inicialitza() {
    //inicio tablero
}

void Tauler::escriuTauler() const {
    // escribe el tablero
}

void Tauler::afegirFigura(const Figura& figura) {
    // pone la figura en la pantalla
}

void Tauler::eliminaFila() {
    // quita fila entera (tiene que bajar las superiores tambien)
}

bool Tauler::esPle(int fila) const {
    //mira si una fila esta llena de bloques (hay que eliminarla)
    for (int col = 0; col < COLUMNAS; ++col) {
        if (m_tauler[fila][col] == 0) {
            return false;
        }
    }
    return true;
}


bool Tauler::Movimentbe(int fila, int columna) const {
    //Mira si se puede hacer el movimiento o no
}

bool Tauler::Girbe() const {
    // mira si la pieza puede girar
}

