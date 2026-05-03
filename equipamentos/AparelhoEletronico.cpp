#include "AparelhoEletronico.h"

namespace equipamentos {

    AparelhoEletronico::AparelhoEletronico(double potencia) {
        this->potencia = potencia;
        this->ligado = false;
    }

    void AparelhoEletronico::ligar() {
        ligado = true;
    }

    void AparelhoEletronico::desligar() {
        ligado = false;
    }

    bool AparelhoEletronico::isLigado() const {
        return ligado;
    }

    double AparelhoEletronico::gerarCalor() const {
        return ligado ? potencia : 0.0;
    }

}