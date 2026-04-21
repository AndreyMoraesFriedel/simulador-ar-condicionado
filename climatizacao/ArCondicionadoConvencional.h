#ifndef AR_CONDICIONADO_CONVENCIONAL_H
#define AR_CONDICIONADO_CONVENCIONAL_H

#include "ArCondicionado.h"

namespace climatizacao {

    class ArCondicionadoConvencional : public ArCondicionado {
        public:
            ArCondicionadoConvencional(double potencia, double tempDesejada);
    };

}

#endif