#ifndef CONTROLE_INVERTER_H
#define CONTROLE_INVERTER_H

#include "ControleCompressor.h"

namespace climatizacao {

    class ControleInverter : public ControleCompressor {
        public:
            void ajustar(Compressor& c, double atual, double desejada) override;
    };

}

#endif