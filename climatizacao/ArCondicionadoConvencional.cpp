#include "ArCondicionadoConvencional.h"
#include "ControleConvencional.h"

namespace climatizacao {

    ArCondicionadoConvencional::ArCondicionadoConvencional(double potencia, double tempDesejada)
    : ArCondicionado(potencia, tempDesejada) {
        controle = new ControleConvencional();
    }

}