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
    element top();
    bool empty() const;
    void push(int value);
    void pop();
    int size() const;

};