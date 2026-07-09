#include <stdio.h>

int main()
{
    Produtor produtor;

    produtor.carregarTreinamento();

    produtor.treinar();

    entidadeObservada teste(
        4,
        0.5,
        1.75,
        0.8,
        false,
        "Desconhecida"
    );

    std::cout
        << produtor.classificar(teste);

    produtor.contarEntidades();

    return 0;
}