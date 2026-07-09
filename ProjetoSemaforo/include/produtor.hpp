class Produtor
{

private:

    std::vector<entidadeObservada> dadosTreinamento;

    Arvore arvore;

public:

    void carregarTreinamento(){

    std::ifstream arquivo("dados/treinamento.csv");
    
    dadosTreinamento.push_back(objeto);

    }

    void treinar();

    std::string classificar(entidadeObservada entidade);

    void contarEntidades();

};