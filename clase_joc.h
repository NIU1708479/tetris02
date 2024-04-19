#include <iostream>
#include <fstream>
#include <sstream>
#include "clase_figura.h"
#include "clase_tauler.h"

using namespace std;

const int FILAS = F;
const int COLUMNAS = C;

class Joc {
public:
    void inicialitza(const std::string& nomFitxer);
    bool giraFigura(DireccioGir direccio);
    bool mouFigura(int dirX);
    int baixaFigura();
    void escriuTauler(const std::string& nomFitxer);

private:
    Tauler m_tauler;
    Figura m_figuraActual;
};

