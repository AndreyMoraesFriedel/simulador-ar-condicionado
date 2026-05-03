#include "Pessoa.h"

namespace pessoas {

    Pessoa::Pessoa(double calor) {
        this->calorGerado = calor;
    }

    double Pessoa::gerarCalor() const {
        return calorGerado;
    }

}