#include <iostream>
#include "../climatizacao/Compressor.h"

using namespace climatizacao;
using namespace std;
void testCompressor() {
    Compressor c(2000);
    c.setVelocidade(0.5);
    double esperado = 1000;
    if (c.gerarResfriamento() == esperado) {
        cout << "PASSOU: Compressor correto\n";
    }
}