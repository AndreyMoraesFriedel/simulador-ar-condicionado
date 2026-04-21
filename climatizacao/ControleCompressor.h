#ifndef CONTROLE_COMPRESSOR_H
#define CONTROLE_COMPRESSOR_H

#include "Compressor.h"

namespace climatizacao {

    class ControleCompressor {
        public:
            virtual void ajustar(Compressor& c, double tempAtual, double tempDesejada) = 0;
            virtual ~ControleCompressor() {}
    };

}

#endif