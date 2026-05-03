#ifndef SIMULADOR_H
#define SIMULADOR_H

namespace simulacao {

    class Simulador {
        public:
            void executar();
        private:
            void mostrarMenu();
            void executarOpcao(int opcao);
            void executarBTUSimples();
            void executarBTUAvancado();
    };

}

#endif