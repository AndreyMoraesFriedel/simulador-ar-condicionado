#include "ControleConvencional.h"

namespace climatizacao {

    void ControleConvencional::ajustar(Compressor& c, double atual, double desejada) {
        if (atual > desejada)
            c.setVelocidade(1.0); //liga
        else
            c.setVelocidade(0.0); //desliga
    }

}