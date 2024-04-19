#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

typedef enum {
    NO_FIGURA = 0,
    FIGURA_O = 1
    FIGURA_I = 2
    FIGURA_T = 3
    FIGURA_L = 4
    FIGURA_J = 5
    FIGURA_Z = 6
    FIGURA_S = 7

} TipusFigura;

typedef enum {
    COLOR_NEGRE = 0,
    COLOR_GROC = 1
    COLOR_BLAUCEL = 2
    COLOR_MAGENTA = 3
    COLOR_TARONJA = 4
    COLOR_BLAUFOSC = 5
    COLOR_VERMELL = 6
    COLOR_VERD = 7
    NO_COLOR
} ColorFigura;

typedef enum {
    GIR_HORARI = 0
    gIR_ANTIHORARI
}DireccioGir;

const int FILAS = F;
const int COLUMNAS = C;

class Figura {
public:
    Figura() { m_ColorFigura = NO_COLOR; m_TipusFigura = NO_FIGURA; }
    ~Figura ()
    void inicialitza();
    void giraFigura();
    void mouFigura(int direccio);
    void baixaFigura();
    void dibuixaFigura() const;
    bool colisiona(const vector<vector<int>>& tauler) const;

private:
    TipusFigura m_tipus;
    ColorFigura m_color;
    int m_posicioX;
    int m_posicioY;
    int m_formaActual[3][3];
};


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



int main() {
    return 0;
}
