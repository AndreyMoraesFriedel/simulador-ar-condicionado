#include "Luz.h"

namespace equipamentos {

    Luz::Luz(double potencia) {
        this->potencia = potencia;
        this->ligada = false;
    }

    void Luz::ligar() {
        ligada = true;
    }

    void Luz::desligar() {
        ligada = false;
    }

    double Luz::gerarCalor() const {
        return ligada ? potencia : 0.0;
    }

}