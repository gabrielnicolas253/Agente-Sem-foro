#ifndef ARVORE_DECISAO_HPP
#define ARVORE_DECISAO_HPP

#include "entidades.hpp"


class Arvore {

public:
    std::string classificar(entidadeObservada entidade);

    void treinar();
};

#endif