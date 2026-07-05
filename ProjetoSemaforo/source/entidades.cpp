#include <string>
#include "entidades.hpp"

entidadeObservada::entidadeObservada(double velocidade, double largura, double altura, double area_ocupada, bool faixa, std::string categoria) {
    m_velocidade = velocidade;
    m_largura = largura;
    m_altura = altura;
    m_area_ocupada = area_ocupada;
    m_faixa = faixa;
    m_categoria = categoria;
}

double entidadeObservada::getVelocidade(){
    return m_velocidade;
}

double entidadeObservada::getAltura(){
    return m_altura;
}

double entidadeObservada::getArea(){
    return m_area_ocupada;
}

bool entidadeObservada::getFaixa(){
    return m_faixa;
}

std::string entidadeObservada::getCategoria(){
    return m_categoria;
}