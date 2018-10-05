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
    * @brief setX: Define o valor da coordenada x do ponto.
    * @param _x é o valor atribuido a coordenada.
    **/
    void setX(float _x);

    /**
    * @brief setY: Define o valor da coordenada y do ponto.
    * @param _y é o valor atribuido a coordenada
    **/
    void setY(float _y);

    /**
    * @brief setXY: Define o valor da coordenada x e y do ponto.
    * @param _x e _y é o valor atribuido aos pontos das coordenada.
    **/
    void setXY(float _x, float _y);

    /**
    * @brief getX: Recupera o valor da coordenada x do ponto.
    **/
    float getX(void);

    /**
    * @brief getY: Recupera o valor da coordenada y do ponto.
    **/
    float getY(void);

    /**
    * @brief add:
    * Adiciona as coordenadas (x,y) do ponto com as coordenadas de um ponto P1(x1,y1) fornecido,
    * armazenando o resultado (x+x1,y+y1) nas coordenadas de um novo ponto, que deverá ser retornado
    * para o cliente da classe.
    * @param p1 é um ponto atribuido pelo usuário.
   * <pre>
   * int main(void){
   *    Point p1,p2,p3;
   *    p1.setXY(1,0);
   *    p2.setXY(9,1);
   *    p3 = p1.add(p2);
   * }
   * </pre>**/
    Point add(Point p1);

    /**
    * @brief sub:
    * Subtrai as coordenadas (x,y) do ponto com as coordenadas de um ponto P1(x1,y1) fornecido,
    * armazenando o resultado (x-x1,y-y1) nas coordenadas de um novo ponto, que deverá ser retornado
    * para o cliente da classe.
    * @param p1 é um ponto atribuido pelo usuário.
   * <pre>
   * int main(void){
   *    Point p1,p2,p3;
   *    p1.setXY(1,0);
   *    p2.setXY(9,1);
   *    p3 = p1.sub(p2);
   * }
   * </pre>**/
    Point sub(Point p1);

    /**
    * @brief norma: Calcula a distância do ponto para a origem do sistema de coordenadas.
    * @param p1 é um ponto atribuido pelo usuário.
    **/
    float norma(void);

    /**
    * @brief translada: Translada o ponto (x,y) de (+a,+b), de modo que, após a execução do método,
    * as coordenadas do ponto serão (x+a,y+b).
    * @param a e b são valores atribuido pelo usuário.
    **/
    void translada(float a, float b);
    /**
    * @brief imprime: Imprime o ponto na forma (xpos, ypos).
   * <pre>
   * int main(void){
   *    Point p1;
   *    p1.setXY(6,9);
   *    p1.translada(1,4);
   * }
   * </pre>**/
    void imprime(void);
};

#endif // POINT_H
