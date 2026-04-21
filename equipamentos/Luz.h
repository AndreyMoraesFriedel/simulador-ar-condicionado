#ifndef LUZ_H
#define LUZ_H

#include "../energia/GeradorCalor.h"

namespace equipamentos {

    class Luz : public energia::GeradorCalor {
        private:
            bool ligada;
            double potencia;
        public:
            Luz(double potencia);
            void ligar();
            void desligar();
            double gerarCalor() override;
    };

}

#endif