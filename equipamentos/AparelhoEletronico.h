#ifndef APARELHO_ELETRONICO_H
#define APARELHO_ELETRONICO_H

#include "../energia/GeradorCalor.h"

namespace equipamentos {

    class AparelhoEletronico : public energia::GeradorCalor {
        protected:
            double potencia;
            bool ligado;
        public:
            AparelhoEletronico(double potencia);
            void ligar();
            void desligar();
            bool isLigado() const;
            virtual double gerarCalor() const override;
    };
}

#endif