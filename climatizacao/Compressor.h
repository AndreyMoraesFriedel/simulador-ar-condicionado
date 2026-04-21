#ifndef COMPRESSOR_H
#define COMPRESSOR_H

namespace climatizacao {

    class Compressor {
        private:
            double potencia; //em Watts
            double velocidade; //0.0 a 1.0
        public:
            Compressor(double potencia);
            void setVelocidade(double v);
            double getVelocidade() const;
            double getPotencia() const;
            double gerarResfriamento() const;
    };

}

#endif