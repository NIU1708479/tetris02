#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Tauler {
public:
    void inicialitza();
    bool Movimentbe(int fila, int columna) const;
    bool Girbe() const;
    void afegirFigura(const Figura& figura);
    void eliminaFilesCompletades();

private:
    int m_caselles[FILAS][COLUMNAS];
    bool filaCompleta(int fila) const;
};
