/**
 * @file maxstack.h
 * @brief  Archivo de especificación del TDA MaxStack
 * @author
 */

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

struct element {
    int value; // Current value to store
    int maximum; // Current max value in the structure
};

ostream& operator<<(ostream &flujo, const element &elem);

class MaxStack{
private:
    queue<element> cola;
    void InvertQueue(queue<element>& cola); // Función auxiliar que invierte la cola (Utilidad: en funcion pop) --> invierte la cola para poder sacar el elemento "back"

public:
    /**
      @brief Devuelve el elemento del top de la pila (back de la cola interna), y este se puede modificar.
      @pre Si pila.size() == 0 no devuelve nada.
    **/
    element top();

    /**
      @brief Devuelve un valor booleano que indica si la pila está vacía o no (Averigua si la cola interna está vacía).
      @pre Ha de llamrarlo una pila (MaxStack).
    **/
    bool empty() const;

    /**
      @brief Reserva un espacio más de memoria para insertar otro elemento en la pila y lo coloca en ese espacio, si el valor es menor que el máximo anterior el máximo insertado se actualizará al anterior.
      @param value El valor es el "value", hará cálculos internos para averiguar cuál será el "maximum" adecuado.
      @pre El valor ha de ser un entero
      @post El "size()" de la pila aumenta en uno.
    **/
    void push(int value);

    /**
      @brief Quita el elemento del top de la pila, también se encarga de hacer un "resize()" (Internamente invierte la cola en una pila auxiliar, quita el elemento de su top, y vuelve a invertirla).
      @pre Si está vacía la pila no hará nada
      @post El "size()" de la pila decrementará en uno.
    **/
    void pop();

    /**
      @brief Para calcular el "size" de la pila, calula el size de la cola interna.
      @return Devuelve un valor entero como tamaño.
    **/
    int size() const;

};
