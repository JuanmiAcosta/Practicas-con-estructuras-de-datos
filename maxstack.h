/**
 * @file maxstack.h
 * @brief  Archivo de especificación del TDA MaxStack
 * @author
 */

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

/*
struct element {
    int value; // Current value to store
    int maximum; // Current max value in the structure
}^*/

class MaxStack{
private:
    queue<int> cola;
    void InvertQueue(queue<int>& cola); // Función auxiliar que invierte la cola (Utilidad: en funcion pop)
public:

    int top();
    bool empty() const;
    void push(int num);
    void pop();
    int size() const;

};