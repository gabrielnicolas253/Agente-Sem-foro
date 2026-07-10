#ifndef PRODUTOR_HPP
#define PRODUTOR_HPP

#include <vector>
#include "entidades.hpp"
#include "arvoreDecisao.hpp"

class Produtor {

public:
    struct Dados{
        double pessoa_prev;
        double carro_prev;
    };

    void carregarTreinamento();

    void treinar();

    std::string classificar(entidadeObservada entidade);

    void contarEntidades();

    Dados repassarInfo();

    bool verificarFaixa();

    double gerarDouble(double min, double max);

    void criarAmbiente(int qntd);

    private:

    int qntd_pessoas;
    int qntd_carros;

    Dados dados;

    std::vector<entidadeObservada> ambienteObservado;

    std::vector<entidadeObservada> dadosTreinamento;


    Arvore arvore;

};

#endif