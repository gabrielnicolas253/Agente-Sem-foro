#include "entidades.hpp"
#include "produtor.hpp"
#include "consumidor.hpp"
#include <iostream>
#include <vector>

int main(int argc, int argv[])
{
    Produtor produtor;
    Consumidor consumidor;

    produtor.criarAmbiente(int (argv[1]+0));

    produtor.carregarTreinamento();

    produtor.treinar();

    //produtor.observar();

    produtor.contarEntidades();

    // Repassagem de Informações coletadas pelo produtor para o consumidor:
    Produtor::Dados d = produtor.repassarInfo();

    consumidor.receberInfo(d);

    consumidor.calcularSemaforo();

    consumidor.semaforoExecucao(produtor);

    return 0;
}