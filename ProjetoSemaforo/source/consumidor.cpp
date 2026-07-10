#include "consumidor.hpp"
#include "produtor.hpp"
#include <iostream>
#include <random>

void Consumidor::receberInfo(Produtor::Dados dadosRecebidos){

    categoria_p = dadosRecebidos.pessoa_prev;
    categoria_c = dadosRecebidos.carro_prev;
    
    comp = categoria_c - categoria_p;
}

void Consumidor::calcularSemaforo(){

    if (comp == 0){
        tempoVermelho = 0.5;
        tempoVerde = 0.5;
    } else if (comp > 0 && comp <= 3) { // Há um pouco mais de carros;
        tempoVermelho = 0.65;
        tempoVerde = 0.35;
    } else if (comp > 3 && comp <= 6) { // Há uma quantidade razoável a mais de carros;
        tempoVermelho = 0.75;
        tempoVerde = 0.25;
    } else if (comp > 6 && comp < 10) { // Há muito mais carros;
        tempoVermelho = 0.9;
        tempoVerde = 0.1;
    } else if (comp == 10) { // Não há pedestres;
        tempoVermelho = 1;
        tempoVerde = 0;
    } else if (comp < 0 && comp >= -3) { // Há um pouco mais de pedestres;
        tempoVermelho = 0.35;
        tempoVerde = 0.65;
    } else if (comp < -3 && comp >= -6) { // Há uma quantidade razoável a mais de pedestres;
        tempoVermelho = 0.25;
        tempoVerde = 0.75;
    } else if (comp < -6 && comp > -10) { // Há muito mais pedestres;
        tempoVermelho = 0.9;
        tempoVerde = 0.10;
    } else if (comp == -10) { // Não há carros;
        tempoVermelho = 0;
        tempoVerde = 1;
    }

    tempoVermelho = tempoVermelho * INTERVALO;
    tempoVerde = tempoVerde * INTERVALO;
}

void Consumidor::semaforoExecucao(Produtor produtor){
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_real_distribution<double> distrib(0, tempoVerde);

    double tempoAleatorio = distrib(gen);

    std::cout << "O semáforo ficará verde por " << tempoVerde << " minutos, e vermelho por " << tempoVermelho << "minutos." << std::endl;
    if(produtor.verificarFaixa()){
        std::cout << "Pedestre foi detectado na faixa durante tempo verde no minuto " << tempoAleatorio << ". Semáforo ficará vermelho temporariamente." << std::endl;
    }
}