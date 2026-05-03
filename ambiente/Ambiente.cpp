#include "Ambiente.h"

namespace ambiente {

    Ambiente::Ambiente(double tempAtual, double tempExterna, double tamanho) {
        this->temperaturaAtual = tempAtual;
        this->temperaturaExterna = tempExterna;
        this->tamanho = tamanho;
    }

    double Ambiente::getTemperatura() const {
        return temperaturaAtual;
    }

    void Ambiente::setTemperatura(double t) {
        temperaturaAtual = t;
    }

    void Ambiente::adicionarPessoa(const pessoas::Pessoa& p) {
        pessoas.push_back(p);
    }

    void Ambiente::adicionarAparelho(equipamentos::AparelhoEletronico* a) {
        aparelhos.push_back(a);
    }

    void Ambiente::adicionarLuz(const equipamentos::Luz& l) {
        luzes.push_back(l);
    }

    void Ambiente::adicionarPorta(const Porta& p) {
        portas.push_back(p);
    }

    void Ambiente::adicionarJanela(const Janela& j) {
        janelas.push_back(j);
    }

    double Ambiente::calcularCalorInterno() const {
        double total = 0;

        for (const auto& p : pessoas)
            total += p.gerarCalor();

        for (auto* a : aparelhos)
            total += a->gerarCalor();

        for (const auto& l : luzes)
            total += l.gerarCalor();

        return total;
    }

    double Ambiente::getTamanho() const {
        return tamanho;
    }

    double Ambiente::getTemperaturaExterna() const {
        return temperaturaExterna;
    }

    const std::vector<Janela>& Ambiente::getJanelas() const {
        return janelas;
    }

}