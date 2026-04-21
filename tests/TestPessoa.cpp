#include <iostream>
#include "../pessoas/Pessoa.h"

using namespace pessoas;
using namespace std;

void testPessoaCalor() {
    Pessoa p(150);
    if (p.gerarCalor() == 150) {
        cout << "PASSOU: Pessoa gera calor correto\n";
    } else {
        cout << "FALHOU: Pessoa gera calor incorreto\n";
    }
}