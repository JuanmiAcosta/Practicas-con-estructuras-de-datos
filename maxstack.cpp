/**
 * @file maxstack.cpp
 * @brief  Archivo de implementación del TDA MaxStack
 * @author
 */

#include "maxstack.h"

//Para ello haremos uso de dos pilas. Sobre una realizaremos las consultas y borrados, sobre otra haremos las inserciones.

//Funciones privadas

element MaxStack::top(){
    return (cola.back());
}

bool MaxStack::empty() const{
    return(cola.empty());
}

void MaxStack::push(int value){
    element elem;
    elem.value=value;
    elem.maximum=value;
    if (elem.value < cola.back().maximum){
        elem.maximum=cola.back().maximum;
    }
    cola.push(elem);
}

void MaxStack::pop() {
    InvertQueue(cola);
    cola.pop();
    InvertQueue(cola);
}

int MaxStack::size() const{
    return (cola.size());
}

void MaxStack::InvertQueue(queue<element>& cola){
    stack<element> aux;

    for (int i=cola.size()-1; i>=0; --i){
        element d=cola.front();
        aux.push(d);
        cola.pop();
    }

    for (int i=aux.size()-1; i>=0; --i){
        element d=aux.top();
        cola.push(d);
        aux.pop();
    }
}

ostream& operator<<(ostream &flujo, const element &elem){
    flujo << elem.value << " , " << elem.maximum;
    return flujo;
}

