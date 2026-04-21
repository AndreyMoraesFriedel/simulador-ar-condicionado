#ifndef CONTROLE_CONVENCIONAL_H
#define CONTROLE_CONVENCIONAL_H

#include "ControleCompressor.h"

namespace climatizacao {

    class ControleConvencional : public ControleCompressor {
        public:
            void ajustar(Compressor& c, double atual, double desejada) override;
    };

}

#endif