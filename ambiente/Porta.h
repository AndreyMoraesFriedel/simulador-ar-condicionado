#ifndef PORTA_H
#define PORTA_H

namespace ambiente {

    class Porta {
        private:
            bool aberta;
        public:
            Porta(bool aberta = false);
            bool isAberta() const;
            void abrir();
            void fechar();
    };

}

#endif