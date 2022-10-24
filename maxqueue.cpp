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
        while(!cola.empty()){
            element aux=cola.top();
            auxiliar.push(aux);
            cola.pop();
        }

    }
    if(!auxiliar.empty())salida=auxiliar.top();

    if(cola.empty()){
        while(!auxiliar.empty()){
            element aux=auxiliar.top();
            cola.push(aux);
            auxiliar.pop();
        }
    }
    return salida;
}

bool MaxQueue::empty() const{
    return (cola.empty());
}

void MaxQueue::push(int num){
    //first.push(num);
    element auxiliar,auxiliar2;
    auxiliar.maximum=num;
    auxiliar.value=num;

    stack<element> aux;
    aux.push(auxiliar);
    // Move all elements from s1 to s2
    while (!cola.empty()) {
        auxiliar=cola.top();
        auxiliar2=aux.top();
        if((auxiliar2.maximum>=auxiliar.maximum)){
            auxiliar.maximum=auxiliar2.maximum;
        }
        aux.push(auxiliar);
        cola.pop();
    }


    // Push everything back to s1
    while (!aux.empty()) {
        cola.push(aux.top());
        aux.pop();
    }
}
void MaxQueue::pop() {
    stack<element> auxiliar;

    if(auxiliar.empty()){
        while(!cola.empty()){
            element aux=cola.top();
            auxiliar.push(aux);
            cola.pop();
        }
    }
    auxiliar.pop();
    if(cola.empty()){
        while(!auxiliar.empty()){
            element aux=auxiliar.top();
            cola.push(aux);
            auxiliar.pop();
        }
    }
}

int MaxQueue::size() const{
    return (cola.size());
}


ostream& operator<<(ostream &flujo, const element &elem){
    flujo << elem.value << "," << elem.maximum;
    return flujo;
}
