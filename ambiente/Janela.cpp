#include "Janela.h"

namespace ambiente {

    Janela::Janela(bool aberta, bool sol) {
        this->aberta = aberta;
        this->incidenciaSolar = sol;
    }

    bool Janela::isAberta() const {
        return aberta;
    }

    bool Janela::temSol() const {
        return incidenciaSolar;
    }

    void Janela::abrir() {
        aberta = true;
    }

    void Janela::fechar() {
        aberta = false;
    }

}