#include "ArCondicionado.h"

namespace climatizacao {

    ArCondicionado::ArCondicionado(double potencia, double tempDesejada) : compressor(potencia) {
        this->temperaturaDesejada = tempDesejada;
        this->controle = nullptr;
    }

    ArCondicionado::~ArCondicionado() {
        delete controle;
    }

    void ArCondicionado::atualizar(double temperaturaAtual) {
        if (controle)
            controle->ajustar(compressor, temperaturaAtual, temperaturaDesejada);
    }

    double ArCondicionado::gerarResfriamento() const {
        return compressor.gerarResfriamento();
    }

    double ArCondicionado::getTemperaturaDesejada() const {
        return temperaturaDesejada;
    }

}