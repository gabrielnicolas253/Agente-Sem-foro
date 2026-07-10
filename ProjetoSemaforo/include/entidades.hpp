#ifndef ENTIDADES_HPP
#define ENTIDADES_HPP

#include <string>

class entidadeObservada {
    private:
        double m_velocidade;
        double m_largura;
        double m_altura;
        double m_area_ocupada;
        std::string m_categoria;
    public:
        entidadeObservada(double velocidade, double largura, double altura, double area_ocupada, std::string categoria);
        double getVelocidade();
        double getLargura();
        double getAltura();
        double getArea();
        std::string getCategoria();
};

#endif