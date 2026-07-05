#include <string>

class entidadeObservada {
    private:
        double m_velocidade;
        double m_largura;
        double m_altura;
        double m_area_ocupada;
        bool m_faixa;
        std::string m_categoria;
    public:
        entidadeObservada(double velocidade, double largura, double altura, double area_ocupada, bool faixa, std::string categoria);
        double getVelocidade();
        double getLargura();
        double getAltura();
        double getArea();
        bool getFaixa();
        std::string getCategoria();
};