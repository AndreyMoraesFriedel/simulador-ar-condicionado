//Lembrando, o foco de um .h é declaracao (interface)
//.cpp é implementaçao

//diretiva de pré-processamento que verifica se o arquivo nao foi criado ainda
#ifndef GERADOR_CALOR_H
/*
Após a primeira verificação, o #define cria a macro, 
garantindo que as próximas tentativas de inclusão do 
arquivo falhem na verificação do #ifndef
*/
#define GERADOR_CALOR_H

/*
agrupador de entidades relacionadas 
como classes, objetos, funções e variáveis 
sob um nome específico
*/
namespace energia {

    /*
    Essa classe serve como uma interface
    em C++ não tem uma palavra-chave nativa
    para realizar tal acao, devemos seguir outra abordagem
    */
    class GeradorCalor {
        /*
        Antes do public (especificador de acesso), posso definir por exemplo
        atributos/métodos que eles já serão definidos como privado
        */
        public:
        /*
        Quando uma função na classe base é declarada como virtual, 
        qualquer chamada a essa função através de um ponteiro ou 
        referência da classe base executará a implementação da 
        subclasse, e não a da base
        */
        virtual double gerarCalor() const = 0;
        /*
        Isso garante que o destrutor da subclasse seja chamado 
        corretamente quando um objeto derivado for deletado por 
        um ponteiro da classe base
        */
        virtual ~GeradorCalor() {}
    };

}

#endif