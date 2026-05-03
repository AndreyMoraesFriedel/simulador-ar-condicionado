#ifndef AMBIENTE_H
#define AMBIENTE_H

#include <vector>
#include "../pessoas/Pessoa.h"
#include "../equipamentos/AparelhoEletronico.h"
#include "../equipamentos/Luz.h"
#include "Porta.h"
#include "Janela.h"

namespace ambiente {

    class Ambiente {
        private:
            double temperaturaAtual;
            double temperaturaExterna;
            double tamanho;
            std::vector<pessoas::Pessoa> pessoas;
            std::vector<equipamentos::AparelhoEletronico*> aparelhos;
            std::vector<equipamentos::Luz> luzes;
            std::vector<Porta> portas;
            std::vector<Janela> janelas;
        public:
            Ambiente(double tempAtual, double tempExterna, double tamanho);

            double getTemperatura() const;
            void setTemperatura(double t);
            void adicionarPessoa(const pessoas::Pessoa& p);
            void adicionarAparelho(equipamentos::AparelhoEletronico* a);
            void adicionarLuz(const equipamentos::Luz& l);
            void adicionarPorta(const Porta& p);
            void adicionarJanela(const Janela& j);
            double calcularCalorInterno() const;
            double getTamanho() const;
            double getTemperaturaExterna() const;
            const std::vector<Janela>& getJanelas() const;
    };

}

#endif