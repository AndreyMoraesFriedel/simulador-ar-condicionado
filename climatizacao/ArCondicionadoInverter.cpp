#include "ArCondicionadoInverter.h"
#include "ControleInverter.h"

namespace climatizacao {

    ArCondicionadoInverter::ArCondicionadoInverter(double potencia, double tempDesejada)
        : ArCondicionado(potencia, tempDesejada) {
        controle = new ControleInverter();
    }

}