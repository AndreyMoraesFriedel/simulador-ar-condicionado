#include "Pessoa.h"

namespace pessoas {

    Pessoa::Pessoa(double calor) {
        this->calorGerado = calor;
    }

    double Pessoa::gerarCalor() {
        return calorGerado;
    }

}