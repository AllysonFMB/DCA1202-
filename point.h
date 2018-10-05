#ifndef POINT_H
#define POINT_H

/**
 * @brief A classe Point serve para representar pontos no espaço bidimensional
 */

class Point{
private:
    float x;
    float y;
public:
    /**
     * @brief Point é o construtor da classe
     **/

    Point();

       /**
       * @brief setX define o valor da coordenada x do ponto.
       * @param _x é o valor atribuido a coordenada.
       **/

    void setX(float _x);
    /**
    * @brief setY define o valor da coordenada y do ponto.
    * @param _y é o valor atribuido a coordenada
    */

    void setY(float _y);

    /**
    * @brief setXY define o valor da coordenada x e y do ponto.
    * @param _x e _y é o valor atribuido aos pontos das coordenada.
    */

    void setXY(float _x, float _y);

    float getX(void);
    float getY(void);

    Point add(Point p1);
    Point sub(Point p1);

    float norma(void);

    void translada(float a, float b);

    void imprime(void);

    Point rotacao(float a);



};

#endif // POINT_H
