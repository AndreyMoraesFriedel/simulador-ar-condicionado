#include <iostream>
#include "../climatizacao/ControleConvencional.h"

using namespace climatizacao;
using namespace std;
void testControleConvencional() {
    Compressor c(2000);
    ControleConvencional controle;
    controle.ajustar(c, 30, 22);
    if (c.getVelocidade() == 1.0)
        cout << "PASSOU: Controle liga compressor\n";
}