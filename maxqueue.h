/**
 * @file maxqueue.h
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
/**
* @brief Is a Queue empty 
* @param Queue pointer
* @return 0 if empty, -1 no empty 
*/
ostream& operator<<(ostream &flujo, const element &elem);
class MaxQueue{
private:
    stack<element> cola; //hacemos de int y no de element primero para ir paso a paso


public:
    /**
    * @brief Devuelve el Front de la cola implementada con pilas. Primero vacía la pila en una pila auxiliar, guarda el valor del top de la pila auxiliar y lo devuelve, posteriormente rellena de nuevo la pila original.
    * @return Front si la cola no está vacía, en caso contrario devuelve un elemento vacío. 
    */
    element front();    
    
    /**
    * @brief Evalua si el elemento de la clase MaxQueue está vacío. 
    * @return 0 Si está vacía, 1 si no lo está.
    */
    bool empty() const;
    
    /**
    * @brief Inserta un elemento en la cola MaxQueue, cuyo valor sería el parámetro y . 
    * @param Int con el valor del elemento a insertar, cuyo maximum será en principio el mismo número, pero antes de insertarlo, habrá que comparar con los demás elementos en la cola, para actualizar su maximum. 
    * @pre El valor ha de ser un entero
    * @post El "size()" de la cola aumenta en uno.
    */
    void push(int num);
    
    /**
    * @brief Elimina el elemento front en la cola MaxQueue, y hace un resize interno con el nuevo size. 
    * @pre Si la cola está vacía no hará nada.
    * @post El "size()" de la cola decrementa en uno.
    */
    void pop();
    
    /**
    * @brief Devuelve el tamaño de la cola, el número de elementos en sí.
    * @return 0 si la cola está vacía, y en caso contrario un entero con el número de elementos.
    */
    int size() const;

};
