#include "entidades.hpp"
#include "produtor.hpp"
#include "consumidor.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main(int argc, char* argv[]){

      if (argc < 2)
    {
        std::cout << "Uso: ./semaforo <quantidade_de_entidades>\n";
        return 1;
    }

    int quantidade = std::stoi(argv[1]);
   

    if (quantidade <= 0)
    {
        std::cout << "A quantidade deve ser maior que zero.\n";
        return 1;
    }

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    Produtor produtor;
    Consumidor consumidor;

    produtor.criarAmbiente(quantidade);

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