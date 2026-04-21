#ifndef JANELA_H
#define JANELA_H

namespace ambiente {

    class Janela {
        private:
            bool aberta;
            bool incidenciaSolar;

        public:
            Janela(bool aberta = false, bool sol = false);

            bool isAberta() const;
            bool temSol() const;

            void abrir();
            void fechar();
    };

}

#endif