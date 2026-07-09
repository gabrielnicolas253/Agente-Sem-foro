#include "arvore.hpp"

void Arvore::treinar()
{
    std::cout << "Treinamento concluído." << std::endl;
}

std::string Arvore::classificar(entidadeObservada entidade)
{

    if(entidade.getLargura() > 1.0)
    {
        return "Carro";
    }

    return "Pessoa";

}