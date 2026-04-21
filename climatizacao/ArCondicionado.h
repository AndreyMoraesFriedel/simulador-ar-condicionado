#ifndef AR_CONDICIONADO_H
#define AR_CONDICIONADO_H

#include "Compressor.h"
#include "ControleCompressor.h"

namespace climatizacao {

    class ArCondicionado {
        protected:
            Compressor compressor;
            ControleCompressor* controle;
            double temperaturaDesejada;

        public:
            ArCondicionado(double potencia, double tempDesejada);
            virtual ~ArCondicionado();

            virtual void atualizar(double temperaturaAtual);

            double gerarResfriamento() const;

            double getTemperaturaDesejada() const;
    };

}

#endif