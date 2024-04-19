#include <iostream>
#include <sstream>
#include "clase_figura.h"

using namespace std;

Figura::Figura()
{
    m_tipus= NO_FIGURA;
    m_color= NO_COLOR;
    m_posicioX=0;
    m_posicioY=0;

    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3;j++)
        {
            m_formaActual[i][j]=0;
        }
    }
}

Figura::Figura(TipusFigura f, ColorFigura c, int x, int y, int forma_incial[3][3])
{
    m_tipus= f;
    m_color= c;
    m_posicioX= x;
    m_posicioY= y;

     for (int i=0; i<3; i++)
    {
        for(int j=0; j<3;j++)
        {
            m_formaActual[i][j]= forma_incial[i][j];
        }
    }
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
