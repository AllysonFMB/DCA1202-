#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/**
 * @brief A classe Retangulo serve para representar os pontos do retangulo no espaço bidimensional
 */

class Retangulo : public Poligono
{

public:
    /**
    * @brief Retangulo é um construtor da classe
    * @param x, y, largura, altura são os valoresatribuido ao póligono. Respectivamente x e y os pontos de origem do
    * retângulo, largura e altura, definem o tamanho do retângulo.
    **/
    Retangulo(float x, float y, float largura, float altura);

};

#endif // RETANGULO_H
