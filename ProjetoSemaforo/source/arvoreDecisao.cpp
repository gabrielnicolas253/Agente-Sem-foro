#include <string>
#include <iostream>
#include "arvoreDecisao.hpp"
#include "entidades.hpp"

void Arvore::treinar()
{
    std::cout << "Treinamento concluído." << std::endl;
}

std::string Arvore::classificar(entidadeObservada entidade) {

    if(entidade.getAltura() > 2.5){
        return "Carro";

    } else {
        
        if(entidade.getVelocidade() > 20) {
        return "Carro";

        } else {

            if(entidade.getLargura() > 2) {
            return "Carro";

            } else {

                if(entidade.getArea() > 2) {
                return "Carro";

                } else {
                    return "Pessoa";
            }
        }
    }
}
}