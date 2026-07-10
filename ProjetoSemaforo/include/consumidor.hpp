#ifndef CONSUMIDOR_HPP
#define CONSUMIDOR_HPP

#include "produtor.hpp"
#define INTERVALO 5

class Consumidor{
    private:
        double categoria_p;
        double categoria_c;
        double comp;
        bool faixaTemCarro;
        bool faixaTemPessoa;
        double tempoVerde;
        double tempoVermelho;
    public:
        void receberInfo(Produtor::Dados d);
        void calcularSemaforo();
        void semaforoExecucao(Produtor produtor);
};

#endif