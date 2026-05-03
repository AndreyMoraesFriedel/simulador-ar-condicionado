#ifndef ENTRADA_DADOS_H
#define ENTRADA_DADOS_H

namespace simulacao {

    class EntradaDados {
        public:
            static double lerArea();
            static int lerPessoas();
            static int lerEletronicos();
            static bool lerSolDireto();
            static double lerTemperaturaAtual();
            static double lerTemperaturaExterna();
            static int lerQuantidade(const char* mensagem);
    };

}

#endif