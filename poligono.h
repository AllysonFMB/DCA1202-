#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

/**
 * @brief A classe Poligono serve para representar os pontos do polígono no espaço bidimensional
 */

class Poligono{
private:
    int npontos = 0;
    Point pontos[100];
public:
    /**
     * @brief Poligono é o construtor da classe
     **/
    Poligono();

    /**
    * @brief insertPontos: Define os pontos do póligono.
    * @param p é o valor de um ponto atribuido ao póligono.
   * <pre>
   * int main(void){
   * // criacao de um poligono retangulo
   *    Poligono a;
   *    Point p1,p2,p3,p4;
   *    p1.setXY(0,0);
   *    p2.setXY(1,0);
   *    p1.setXY(1,1);
   *    p2.setXY(0,1);
   *    a.insertPontos(p1);
   *    a.insertPontos(p2);
   *    a.insertPontos(p3);
   *    a.insertPontos(p4);
   * }
   * </pre>**/
    void insertPontos(Point p);

    /**
    * @brief insertPontos: Define os pontos do póligono.
    * @param a e b é o valor de um ponto atribuido ao póligono.
   * <pre>
   * int main(void){
   * // criacao de um poligono retangulo
   *    Poligono a;
   *    a.insertPontos(0,0);
   *    a.insertPontos(1,0);
   *    a.insertPontos(1,1);
   *    a.insertPontos(0,1);
   * }
   * </pre>**/
    void insertPontos(float a, float b);

    /**
    * @brief numerodePontos: Retorna o número de pontos do polígono.
    **/
    int numerodePontos();

    /**
    * @brief transladaPoligono: Translada todos os pontos do polígono para (+a,+b), usando a funnção translada do ponto.
    * @param a e b são valores atribuido pelo usuário.
   * <pre>
   * int main(void){
   * // criacao de um poligono retangulo
   *    Poligono a;
   *    a.insertPontos(0,0);
   *    a.insertPontos(1,0);
   *    a.insertPontos(1,1);
   *    a.insertPontos(0,1);
   *    a.translada(2,5); //desloca o poligono em todos os pontos (x+a, y+b)
   * }
   * </pre>**/
    void transladaPoligono(float a, float b);

    /**
    * @brief areaPoligono: Retorna o valor da área do polígono.
    **/
    float areaPoligono();

    /**
    * @brief rotacaoPoligono: Rotaciona o polígono de θ graus no sentido anti-horário em torno de um ponto (x0,y0) fornecido pelo usuário.
    * @param angulo e p são valores atribuido pelo usuário, ângulo e ponto de rotação.
   * <pre>
   * int main(void){
   * // criacao de um poligono retangulo
   *    Poligono a;
   *    Point p;
   *    a.insertPontos(0,0);
   *    a.insertPontos(1,0);
   *    a.insertPontos(1,1);
   *    a.insertPontos(0,1);
   *    p.setXY(0,0);
   *    a.rotacaoPoligno(90,p);
   * }
   * </pre>**/
    void rotacaoPoligono(float angulo, Point p);

    /**
    * @brief rotacaoPoligono: Rotaciona o polígono de θ graus no sentido anti-horário em torno de um ponto (x0,y0) fornecido pelo usuário.
    * @param angulo, x e y são valores atribuido pelo usuário, ângulo e ponto de rotação (x,y).
   * <pre>
   * int main(void){
   * // criacao de um poligono retangulo
   *    Poligono a;
   *    a.insertPontos(0,0);
   *    a.insertPontos(1,0);
   *    a.insertPontos(1,1);
   *    a.insertPontos(0,1);
   *    a.rotacaoPoligno(90,0,0);
   * }
   * </pre>**/
    void rotacaoPoligono(float angulo, float x, float y);

    /**
   * @brief RCMPoligono: Rotaciona o polígono de θ graus no sentido anti-horário em torno do centro de massa.
   * @param angulo é um valor atribuido pelo usuário.
   * <pre>
   * int main(void){
   * // criacao de um poligono retangulo
   *    Poligono a;
   *    a.insertPontos(0,0);
   *    a.insertPontos(1,0);
   *    a.insertPontos(1,1);
   *    a.insertPontos(0,1);
   *    a.RMCPoligno(90);
   * }
   * </pre>**/
    float RCMPoligono(float angulo);

    /**
    * @brief imprimirPoligono: Imprimir o polígono armazenado da forma (x0,y0)→(x1,y1)→(x2,y2)→…​
    **/
    void imprimirPoligono();
};



#endif // POLIGONO_H
