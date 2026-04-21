#include "Compressor.h"

namespace climatizacao {

    Compressor::Compressor(double potencia) {
        this->potencia = potencia;
        this->velocidade = 0.0;
    }

    void Compressor::setVelocidade(double v) {
        if (v < 0.0) v = 0.0;
        if (v > 1.0) v = 1.0;
        velocidade = v;
    }

    double Compressor::getVelocidade() const {
        return velocidade;
    }

    double Compressor::getPotencia() const {
        return potencia;
    }

    double Compressor::gerarResfriamento() const {
        return potencia * velocidade;
    }

}