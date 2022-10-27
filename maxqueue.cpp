/**
 * @file maxqueue.cpp
 * @brief  Archivo de implementación del TDA MaxStack
 * @author
 */

#include "maxqueue.h"

//Para ello haremos uso de dos pilas. Sobre una realizaremos las consultas y borrados, sobre otra haremos las inserciones.

//Funciones privadas

element MaxQueue::front(){
    stack<element> auxiliar;
    element salida;
    if(auxiliar.empty()){
        while(!pila.empty()){
            element aux=pila.top();
            auxiliar.push(aux);
            pila.pop();
        }

    }
    if(!auxiliar.empty())salida=auxiliar.top();

    if(pila.empty()){
        while(!auxiliar.empty()){
            element aux=auxiliar.top();
            pila.push(aux);
            auxiliar.pop();
        }
    }
    return salida;
}

bool MaxQueue::empty() const{
    return (pila.empty());
}

void MaxQueue::push(int num){

    element auxiliar,auxiliar2;
    auxiliar.maximum=num;
    auxiliar.value=num;

    stack<element> aux;
    aux.push(auxiliar);
    // Move all elements from s1 to s2
    while (!pila.empty()) {
        auxiliar=pila.top();++++++++++++++++++++++++++++

        auxiliar2=aux.top();
        if((auxiliar2.maximum>=auxiliar.maximum)){
            auxiliar.maximum=auxiliar2.maximum;
        }
        aux.push(auxiliar);
        pila.pop();
    }


    // Push everything back to s1
    while (!aux.empty()) {
        pila.push(aux.top());
        aux.pop();
    }
}

void MaxQueue::pop() {
    stack<element> auxiliar;

    if(auxiliar.empty()){
        while(!pila.empty()){
            element aux=pila.top();
            auxiliar.push(aux);
            pila.pop();
        }
    }
    auxiliar.pop();
    if(pila.empty()){
        while(!auxiliar.empty()){
            element aux=auxiliar.top();
            pila.push(aux);
            auxiliar.pop();
        }
    }
}

int MaxQueue::size() const{
    return (pila.size());
}


ostream& operator<<(ostream &flujo, const element &elem){
    flujo << elem.value << "," << elem.maximum;
    return flujo;
}
