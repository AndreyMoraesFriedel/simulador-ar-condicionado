#ifndef AR_CONDICIONADO_INVERTER_H
#define AR_CONDICIONADO_INVERTER_H

#include "ArCondicionado.h"

namespace climatizacao {

    class ArCondicionadoInverter : public ArCondicionado {
        public:
            ArCondicionadoInverter(double potencia, double tempDesejada);
    };

}

#endif