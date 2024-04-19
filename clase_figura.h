#include <iostream>
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
    //constructors
    Figura() { m_ColorFigura = NO_COLOR; m_TipusFigura = NO_FIGURA; }
    ~Figura ()

    //mètodes
    void inicialitza();
    void giraFigura();
    void mouFigura(int direccio);
    void baixaFigura();
    void dibuixaFigura() const;
    bool colisiona(const vector<vector<int>>& tauler) const;

    //getters i setters
    ColorFigura getColor() const { return m_color;}
    TipusFigura getTipus() const {return m_tipus;}
    int getX()const {return m_posicioX;}
    int getY() const {return m_posicioY;}
     
    void setX(int pos_X) {m_posiciox=pos_X; }
    void setY(int pos_y) {m_posicioY=pos_y; }
    void setTipus (TipusFigura f) {m_tipus=f;}
    void setColor (ColorFigura c) {m_color=c;}

private:
    TipusFigura m_tipus;
    ColorFigura m_color;
    int m_posicioX;
    int m_posicioY;
    int m_formaActual[3][3];
};
