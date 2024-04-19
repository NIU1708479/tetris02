#include <iostream>
#include <fstream>
#include <sstream>
#include "clase_joc.h"

using namespace std;

void Joc::inicialitza(const string& nomFitxer) {
    ifstream fitxer(nomFitxer);

    if (fitxer.is_open()) {
        // Lee la figura actual
        int colorFiguraActual;
        fitxer >> colorFiguraActual;

        m_figuraActual.inicialitza(colorFiguraActual);

        //lee las casillas que ya hay ocupadas
        for (int fila = 0; fila < FILAS; ++fila) {
            for (int columna = 0; columna < COLUMNAS; ++columna) {
                int valorCasella;
                fitxer >> valorCasella;
                m_tauler.setCasella(fila, columna, valorCasella);
            }
        }

        fitxer.close();
    }
}


bool Joc::giraFigura(DireccioGir direccio) {
    // gira la figura en la direccion que toca
    return m_figuraActual.giraFigura(direccio);
}

bool Joc::mouFigura(int dirX) {
    // hace los movimientos horizontales
    return m_figuraActual.mouFigura(dirX);
}

int Joc::baixaFigura() {
    // hace movimiento vertical (caida del tetris)
    return m_figuraActual.baixaFigura();
}

void Joc::escriuTauler(const std::string& fichero_random) {
    // guarda el tablero en un fichero random
    m_tauler.escriuTauler(nomFitxer);
}
