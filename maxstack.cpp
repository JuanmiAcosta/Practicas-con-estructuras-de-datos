/**
 * @file maxstack.cpp
 * @brief  Archivo de implementación del TDA MaxStack
 * @author
 */

#include "maxstack.h"

//Para ello haremos uso de dos pilas. Sobre una realizaremos las consultas y borrados, sobre otra haremos las inserciones.

//Funciones privadas

int MaxStack::top(){
    return (cola.back());
}

bool MaxStack::empty() const{
    return(cola.empty());
}

void MaxStack::push(int num){
    cola.push(num);
}

void MaxStack::pop() {
    InvertQueue(cola);
    cola.pop();
    InvertQueue(cola);
}

int MaxStack::size() const{
    return (cola.size());
}

void MaxStack::InvertQueue(queue<int> cola){
    stack<int> aux;
    for (int i=cola.size()-1; i>=0; --i){
        int d=cola.front();
        aux.push(d);
        cola.pop();
    }
    for (int i=aux.size()-1; i>=0; --i){
        int d=aux.top();
        cola.push(d);
        aux.pop();
    }
}