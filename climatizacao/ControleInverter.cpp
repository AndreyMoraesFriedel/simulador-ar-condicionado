#include "ControleInverter.h"
#include <algorithm>

namespace climatizacao {

    void ControleInverter::ajustar(Compressor& c, double atual, double desejada) {
        double diff = atual-desejada;
        if (diff > 0) {
            double velocidade = std::min(1.0, diff / 10.0);
            c.setVelocidade(velocidade);
        } else {
            c.setVelocidade(0.2); //mantém leve funcionamento
        }
    }

}