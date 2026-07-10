#include "produtor.hpp"
#include "arvoreDecisao.hpp"
#include "consumidor.hpp"
#include "entidades.hpp"
#include <iostream>
#include <fstream>
#include <random>
#include <algorithm>

double Produtor::gerarDouble(double minimo, double maximo){
 
    return minimo + ((double) rand() / RAND_MAX) * (maximo - minimo);

}

void Produtor::carregarTreinamento(){
    //Lê a linhas e cria entidades para adicionar no vetor "dadosTreinamento".
}

void Produtor::treinar(){
    //Chama o treinamento da árvore
}

//std::string Produtor::classificar(entidadeObservada entidade){
    //Delega
//}

void Produtor::criarAmbiente(int qntd){

    for(int i = 0; i < qntd; i++){
        
    bool ehCarro = rand() % 2;

    double velocidade;
    double largura;
    double altura;
    double area;
    std::string categoria;

    if(ehCarro)
    {
        velocidade = gerarDouble(0.0, 70.0);   // km/h
        largura = gerarDouble(1.6, 2.6);       // metros
        altura = gerarDouble(1.0, 4.0);        // metros
        area = gerarDouble(8.0, 10.0);         // m²

        categoria = "Carro";
    }
    else
    {
        velocidade = gerarDouble(0.0, 15.0);   // km/h
        largura = gerarDouble(0.30, 0.50);     // metros
        altura = gerarDouble(1.0, 2.0);        // metros
        area = gerarDouble(1.3, 1.9);          // m²

        categoria = "Pessoa";

    }

    entidadeObservada entidade(
        velocidade,
        largura,
        altura,
        area,
        categoria
    );

    ambienteObservado.push_back(entidade);

    }
}

void Produtor::contarEntidades(){

    for(int i=0; i<ambienteObservado.size(); i++){

        if(arvore.classificar(ambienteObservado[i]) == "Pessoa") {
            qntd_pessoas++;
        }
        else
            qntd_carros++;
    }
    std::cout << "Quantidade de Carros: " << qntd_carros << std::endl << "Quantidade de pessoas: " << qntd_pessoas << std::endl;
}

// Método que repassa os dados adquiridos para o consumidor.
Produtor::Dados Produtor::repassarInfo(){

    dados.pessoa_prev = std::min(10, qntd_pessoas * 10 / 20);
    dados.carro_prev = std::min(10, qntd_carros * 10 / 7);

    std::cout << "Nivel de carros: "
              << dados.carro_prev << '\n';

    std::cout << "Nivel de pessoas: "
              << dados.pessoa_prev << '\n';

    return dados;
}

bool Produtor::verificarFaixa(){
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_real_distribution<double> distrib(0,1);

    double pessoaNaFaixa = distrib(gen);

    if(pessoaNaFaixa > 0.2) 
        return false;
     else
        return true;
}