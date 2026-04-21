#include "Porta.h"

namespace ambiente {

    Porta::Porta(bool aberta) {
        this->aberta = aberta;
    }

    bool Porta::isAberta() const {
        return aberta;
    }

    void Porta::abrir() {
        aberta = true;
    }

    void Porta::fechar() {
        aberta = false;
    }

}